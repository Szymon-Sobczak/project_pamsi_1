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

void SLinkedList::displayList(){
    SNode * Adress = head;
    while (Adress != NULL){
        std::cout << Adress->getID() << ". " << Adress->getElement() << std::endl;;
        Adress = Adress->getNext();
    }
}

void SLinkedList::Append(const std::string & node_data){
    Length++;
    SNode * newNode = new SNode(Length);
    SNode * last = head; 
    newNode->setElement(node_data);
    newNode->setNext(NULL);
    if (head == NULL){
        head = newNode;
    }
    else{
        while (last->getNext() != NULL){
            last = last->getNext();
        }
        last->setNext(newNode);
    }
}

void SLinkedList::insertAfter(const std::string & node_data, int ID){
    Length++;
    SNode * newNode = new SNode(Length);
    SNode * last = head; 
    newNode->setElement(node_data);
    newNode->setNext(NULL);
    
    while (last->getID() != ID){
        last = last->getNext();
    }
    newNode->setNext(last->getNext());
    last->setNext(newNode);
}
 
const std::string & SLinkedList::front() const{
    return head->getElement();
}
