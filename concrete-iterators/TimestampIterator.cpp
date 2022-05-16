//
// Created by beloin on 15/05/2022.
//

#include "TimestampIterator.h"
#include "../sorting-algorithms/quicksort.h"

TimestampIterator::TimestampIterator(List<Video *>* videos) {
    Video **a = (Video**) malloc(sizeof (Video*) * 3);
    for (int i = 0; i < videos->getCount(); ++i) {
        a[i] = videos->getItemArray()[i];
    }
    quicksort(a, (int) videos->getCount(), [](Video *v){return v->getTimestamp();});
    videos->setItemArray(a);
    this->videos = videos;
}

void TimestampIterator::Fist() {
    this->current = 0;
}

void TimestampIterator::Next() {
    if (IsDone()) return;
    this->current++;
}

bool TimestampIterator::IsDone() {
    return this->current == this->videos->getCount();
}

Video *TimestampIterator::CurrentItem() {
    return this->videos->getItem(this->current);
}

