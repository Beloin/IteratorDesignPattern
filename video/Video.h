//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_VIDEO_H
#define ITERATOR_VIDEO_H
#include "string"

using namespace std;

class Video {
private:
    string *title;
    long viewsCount;
    long timestamp;
    long commentsCount;

public:
    string *getTitle() const;
    long getViewsCount() const;
    long getTimestamp() const;
    long getCommentsCount() const;
    Video(string *title, long viewsCount, long timestamp, long commentsCount);
};


#endif //ITERATOR_VIDEO_H
