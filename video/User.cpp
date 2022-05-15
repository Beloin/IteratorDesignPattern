//
// Created by beloin on 15/05/2022.
//

#include "User.h"

User::User(string *userName) : userName(userName) {
    this->videos = VideoContainer::DefaultContainer();
}

Iterator<Video *> *User::getVideoIterator(IteratorType tp) {
    return this->videos->createIterator(tp);
}

void User::appendVideo(Video *v) {
    this->videos->appendItem(v);
}

