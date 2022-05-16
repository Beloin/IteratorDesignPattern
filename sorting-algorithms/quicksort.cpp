//
// Created by beloin on 15/05/2022.
//

#include "quicksort.h"

void quicksort(Video* in, int size, long (*func)(Video*)) {
    quick(in, 0, size, func);
}

void quick(Video *in, int start, int end, long (*func)(Video*)) {
    if (start < end) {
        int pivotIndex = partition(in, start, end, func);
        quick(in, start, pivotIndex-1, func);
        quick(in, pivotIndex + 1, end, func);
    }
}

int partition(Video *in, int start, int end, long (*func)(Video*)) {
    Video *pivot = &in[start];
    int currentIndex = start;
    Video* aux;
    for (int compareIndex = start + 1; compareIndex <= end; compareIndex++) {
        if (func(&in[compareIndex]) <= func(pivot)) {
            currentIndex += 1;
            aux = &in[currentIndex];
            in[currentIndex] = in[compareIndex];
            in[compareIndex] = *aux;
        }
    }

    aux = &in[currentIndex];
    in[currentIndex] = in[start];
    in[start] = *aux;

    return currentIndex;
}