//
// Created by beloin on 15/05/2022.
//

#include "Video.h"

Video::Video(string *title, long viewsCount, long timestamp, long commentsCount) : title(title), viewsCount(viewsCount),
                                                                                   timestamp(timestamp),
                                                                                   commentsCount(commentsCount) {}

string *Video::getTitle() const {
    return title;
}

long Video::getViewsCount() const {
    return viewsCount;
}

long Video::getTimestamp() const {
    return timestamp;
}

long Video::getCommentsCount() const {
    return commentsCount;
}
