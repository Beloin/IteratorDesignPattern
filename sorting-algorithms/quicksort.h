//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_QUICKSORT_H
#define ITERATOR_QUICKSORT_H

void quicksort(Video* in, int size, long (*func)(Video*));
void quick(Video *in, int start, int end);
void partition(Video *in, int start, int end);

#endif //ITERATOR_QUICKSORT_H
