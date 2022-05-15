//
// Created by beloin on 15/05/2022.
//

#include "DefaultIterator.h"

DefaultIterator::DefaultIterator(List<Video *>* videos) {
    this->videos = videos;
}

void DefaultIterator::Fist() {
    this->current = 0;
}

void DefaultIterator::Next() {
    if (IsDone()) return;
    this->current++;
}

bool DefaultIterator::IsDone() {
    return this->current == this->videos->getCount();
}

Video *DefaultIterator::CurrentItem() {
    return this->videos->getItem(this->current);
}
