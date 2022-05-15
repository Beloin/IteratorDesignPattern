//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H

template <class T>
class Iterator {
public:
    virtual void Fist() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual T CurrentItem() = 0;
};

#endif //ITERATOR_ITERATOR_H
