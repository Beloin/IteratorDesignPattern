//
// Created by beloin on 15/05/2022.
//

#include "ViewCountIterator.h"

ViewCountIterator::ViewCountIterator(List<Video *>* videos) {
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

