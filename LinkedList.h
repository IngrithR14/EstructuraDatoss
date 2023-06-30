//
// Created by nenit on 30/06/2023.
//

#ifndef ESTRUCTURADATOSS_LINKEDLIST_H
#define ESTRUCTURADATOSS_LINKEDLIST_H

#include <vector>
#include "Node.h"

template<class T>
class LinkedList {
public:
    LinkedList();

    bool isEmpty();

    void addNodeFirst(T);
    std::vector<T> getLinkedList();

private:
    Node<T> *head;


};



#endif //ESTRUCTURADATOSS_LINKEDLIST_H
