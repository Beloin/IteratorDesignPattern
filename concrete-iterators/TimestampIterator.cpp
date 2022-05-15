//
// Created by beloin on 15/05/2022.
//

#include "TimestampIterator.h"

TimestampIterator::TimestampIterator(List<Video *>* videos) {
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

