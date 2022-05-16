//
// Created by beloin on 15/05/2022.
//

#include <TimestampIterator.h>
#include <ViewCountIterator.h>
#include <CommentCountIterator.h>
#include <DefaultIterator.h>
#include "VideoContainer.h"

VideoContainer::VideoContainer(long maxSize) : List(maxSize) {}

VideoContainer *VideoContainer::DefaultContainer() {
    return new VideoContainer(VideoContainer::DEFAULT_SIZE);
}

Iterator<Video *> *VideoContainer::createIterator(IteratorType tp) {
    switch (tp) {
        case VIEWS:
            return new ViewCountIterator(this);
        case TIMESTAMP:
            return new TimestampIterator(this);
        case COMMENTS:
            return new CommentCountIterator(this);
    }

    return new DefaultIterator(this);
}

long VideoContainer::getCount() {
    return this->count;
}

Video *&VideoContainer::getItem(long index) {
    return this->itemArray[index];
}

void VideoContainer::appendItem(Video *&it) {
    this->itemArray[count] = it;
    count++;
}

Video **VideoContainer::getItemArray() const {
    return this->itemArray;
}

