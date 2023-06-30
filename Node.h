//
// Created by nenit on 30/06/2023.
//

#ifndef ESTRUCTURADATOSS_NODE_H
#define ESTRUCTURADATOSS_NODE_H

#include <cstdio>

template<class T>
class LinkedList;

template<class T>
class Node {
public:
    friend class LinkedList<T>;

    Node() {
        Node::next = NULL;
    }

    explicit Node(T info) : info(info) {
        Node::next = NULL;
    }

    /*T getInfo() const {
        return info;
    }

    void setInfo(T info) {
        Node::info = info;
    }

    Node<T> *getNext() const {
        return next;
    }

    void setNext(Node<T> *next) {
        Node::next = next;
    }*/

private:
    T info;
    Node<T> *next;
};


#endif //ESTRUCTURADATOSS_NODE_H
