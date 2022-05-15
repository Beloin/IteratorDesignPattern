//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_VIDEOCONTAINER_H
#define ITERATOR_VIDEOCONTAINER_H

#include "Video.h"
#include "../iterator/List.h"
#include "../iterator/Iterator.h"

enum IteratorType {
    TIMESTAMP,
    VIEWS,
    COMMENTS
};

class VideoContainer : public List<Video*> {
private:
    const static long DEFAULT_SIZE = 200;
public:
    explicit VideoContainer(long maxSize);
    Iterator<Video*> *createIterator(IteratorType);
    static VideoContainer *DefaultContainer();

    long getCount() override;
    Video *&getItem(long index) override;
    void appendItem(Video *&it) override;
};


#endif //ITERATOR_VIDEOCONTAINER_H
