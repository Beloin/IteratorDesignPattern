//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_COMMENTCOUNTITERATOR_H
#define ITERATOR_COMMENTCOUNTITERATOR_H
#include "../iterator/List.h"
#include "../iterator/Iterator.h"
#include "../video/Video.h"

class CommentCountIterator : public Iterator<Video*>{
private:
    long current = 0;
    List<Video*> *videos;

public:
    explicit CommentCountIterator(List<Video*> *);

    void Fist() override;
    void Next() override;
    bool IsDone() override;
    Video *CurrentItem() override;
};


#endif //ITERATOR_COMMENTCOUNTITERATOR_H
