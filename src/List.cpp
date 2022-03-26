#include "List.hh"

//sprawdzanie czy lista jest pusta
bool SLinkedList::empty() const{
    if(head == NULL){
        return 0;
    }
    else 
        return 1;
} 

void SLinkedList::addFront(const std::string & node_data){
    Length++;
    SNode * newNode = new SNode(Length);
    newNode->setElement(node_data);
    newNode->setNext(head);
    head = newNode;
}

    // SNode * newNode = new SNode;
    // SNode * last = head; 
    // newNode->setElement(node_data);
    // newNode->setNext(NULL);
    
    // if (head == NULL){
    //     head = newNode;
    // return;
    // }
    // while (last->getNext() != NULL){
    //     last = last->getNext();
    //     last->next = newNode;
    // }
    // return;


const std::string & SLinkedList::front() const{
    return head->getElement();
} //zwraca pierwszy element
