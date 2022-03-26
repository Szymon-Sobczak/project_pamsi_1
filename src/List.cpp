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
    struct SNode* newNode = new SNode;
    struct SNode * last = head; 
    newNode->elem = node_data;
    newNode->next = NULL;
    if (head == NULL){
        head = newNode;
    return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = newNode;
    return;
}

const std::string & SLinkedList::front() const{
    return head->getElement();
} //zwraca pierwszy element
