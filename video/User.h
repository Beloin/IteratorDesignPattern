//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_USER_H
#define ITERATOR_USER_H
#include "VideoContainer.h"
#include "string"

using namespace std;

class User {
private:
    string *userName;
    VideoContainer* videos;
public:
    explicit User(string *userName);

public:
    Iterator<Video*>* getVideoIterator(IteratorType);
    void appendVideo(Video*);
};


#endif //ITERATOR_USER_H
