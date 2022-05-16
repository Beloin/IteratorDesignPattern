//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_QUICKSORT_H
#define ITERATOR_QUICKSORT_H

#include "../video/Video.h"

int partition(Video *in, int start, int end, long (*func)(Video*));
void quick(Video *in, int start, int end, long (*func)(Video*));
void quicksort(Video *in, int size, long (*func)(Video*));

#endif //ITERATOR_QUICKSORT_H
