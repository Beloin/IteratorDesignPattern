//
// Created by beloin on 15/05/2022.
//

#ifndef ITERATOR_LIST_H
#define ITERATOR_LIST_H


template <class Item>
class List {
protected:
    Item* itemArray;
    long count;

public:
    explicit List(long MAX_SIZE);
    virtual long getCount() = 0;
    virtual Item& getItem(long index) = 0;
    virtual void appendItem(Item &it) = 0;
};

template<class Item>
List<Item>::List(long MAX_SIZE) {
    this->itemArray = new Item[MAX_SIZE];
    count = 0;
}

#endif //ITERATOR_LIST_H
