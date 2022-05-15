//
// Created by beloin on 15/05/2022.
//

#include "quicksort.h"

void quicksort(Video* in, int size, long (*func)(Video*)) {

}

void quick(Video *in, int start, int end) {
    if (start < end) {
        int pivotIndex = partition(in, start, end);
        quick(in, start, pivotIndex-1);
        quick(in, pivotIndex + 1, end);
    }
}

void partition(Video *in, int start, int end, ) {
    Video *pivot = in[start];
    int currentIndex = start;
    Video* aux;
    for (int compareIndex = start + 1; compareIndex <= end; compareIndex++) {
        if (in[compareIndex]->timestamp <= pivot->timestamp) {
            currentIndex += 1;
            aux = in[currentIndex];
            in[currentIndex] = in[compareIndex];
            in[compareIndex] = aux;
        }
    }

    aux = in[currentIndex];
    in[currentIndex] = in[left];
    in[left] = aux;

    return currentIndex;
}