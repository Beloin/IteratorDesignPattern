//
// Created by beloin on 15/05/2022.
//

#include "ViewCountIterator.h"
#include "../sorting-algorithms/quicksort.h"

ViewCountIterator::ViewCountIterator(List<Video *>* videos) {
    Video **a = (Video**) malloc(sizeof (Video*) * 3);
    for (int i = 0; i < videos->getCount(); ++i) {
        a[i] = videos->getItemArray()[i];
    }
    quicksort(a, (int) videos->getCount(), [](Video *v){return v->getViewsCount();});
    videos->setItemArray(a);
    this->videos = videos;
}

void ViewCountIterator::Fist() {
    this->current = 0;
}

void ViewCountIterator::Next() {
    if (IsDone()) return;
    this->current++;
}

bool ViewCountIterator::IsDone() {
    return this->current == this->videos->getCount();
}

Video *ViewCountIterator::CurrentItem() {
    return this->videos->getItem(this->current);
}

