//
// Created by beloin on 15/05/2022.
//

#include "CommentCountIterator.h"
#include "../sorting-algorithms/quicksort.h"

CommentCountIterator::CommentCountIterator(List<Video *>* videos) {
    quicksort((Video *) videos->getItemArray(), videos->getCount(), [](Video *video) { return video->getTimestamp(); } );
    this->videos = videos;
}

void CommentCountIterator::Fist() {
    this->current = 0;
}

void CommentCountIterator::Next() {
    if (IsDone()) return;
    this->current++;
}

bool CommentCountIterator::IsDone() {
    return this->current == this->videos->getCount();
}

Video *CommentCountIterator::CurrentItem() {
    return this->videos->getItem(this->current);
}

