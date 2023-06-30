//
// Created by nenit on 30/06/2023.
//
#include "LinkedList.h"

template<class T>

bool LinkedList<T>::isEmpty() {
    if (head == NULL) {
        return true;
    }

    return false;
    return head == NULL ? true : false;
    return head == NULL;
}

template<class T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<class T>
void LinkedList<T>::addNodeFirst(T info) {
    Node<T> *newNode = new Node<T>(info);
    if (isEmpty() == true) {
        head = newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
}
template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    Node<T> *aux= head;
    std::vector<T> vecList;
    while(aux != NULL){
        vecList.push_back(aux->info);
        aux=aux->next;
    }
    return vecList;
}

