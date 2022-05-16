//
// Created by beloin on 15/05/2022.
//

#include "CommentCountIterator.h"
#include "../sorting-algorithms/quicksort.h"


CommentCountIterator::CommentCountIterator(List<Video *>* videos) {
    Video **a = (Video**) malloc(sizeof (Video*) * 3);
    for (int i = 0; i < videos->getCount(); ++i) {
        a[i] = videos->getItemArray()[i];
    }
    quicksort(a, (int) videos->getCount(), [](Video *v){return v->getCommentsCount();});
    videos->setItemArray(a);
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

