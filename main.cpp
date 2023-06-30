#include <iostream>
#include "LinkedList.cpp"

using namespace std;
// estoy nadando en aguas turbias salvenme
int main() {
    /*Node<char> *node = new Node<char>('I');
    node->setNext(new Node<char>('n'));
    node->getNext()->setNext(new Node<char>('g'));
    node->getNext()->getNext()->setNext(new Node<char>('r'));
    node->getNext()->getNext()->getNext()->setNext(new Node<char>('i'));
    node->getNext()->getNext()->getNext()->getNext()->setNext(new Node<char>('t'));
    node->getNext()->getNext()->getNext()->getNext()->getNext()->setNext(new Node<char>('h'));
    cout << node->getInfo()
         << node->getNext()->getInfo()
         << node->getNext()->getNext()->getInfo()
         << node->getNext()->getNext()->getNext()->getInfo()
         << node->getNext()->getNext()->getNext()->getNext()->getInfo()
         << node->getNext()->getNext()->getNext()->getNext()->getNext()->getInfo()
         << node->getNext()->getNext()->getNext()->getNext()->getNext()->getNext()->getInfo() << endl;
    Node<int> *num = new Node<int>(3);
    num->setNext(new Node<int>(5));
    cout << num->getInfo() << num->getNext()->getInfo() << endl;
    delete (node);
    delete (num);*/
    LinkedList<char> *list = new LinkedList<char>();
    cout << list->isEmpty() << endl;
    list->addNodeFirst('H');
    list->addNodeFirst('T');
    list->addNodeFirst('A');
    list->addNodeFirst('E');
    list->addNodeFirst('D');

    for (char c:list->getLinkedList()) {
        cout<<c;
    }
    //hola soy henry y voy a llorar  y no de risa
    delete(list);
    return 0;
}

