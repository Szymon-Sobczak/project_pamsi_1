#include "List.hh"

//sprawdzanie czy lista jest pusta
bool SLinkedList::Empty() const{
    if(head == NULL){
        return 0;
    }
    else 
        return 1;
} 

/* Dodanie nowego elementu listy na jej poczatku */
void SLinkedList::AddFront(const std::string & node_data){
    Length++;
    SNode * newNode = new SNode(Length);
    newNode->setElement(node_data);
    newNode->setNext(head);
    head = newNode;
}

/* Wyswietlenie elementow listy */
void SLinkedList::DisplayList(){
    SNode * Adress = head;
    while (Adress != NULL){
        std::cout << Adress->getID() << ". " << Adress->getElement() << std::endl;;
        Adress = Adress->getNext();
    }
}

/* Dodanie nowego elementu listy na jej koncu */
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

/* Dodanie nowego elementu listy po okreslonym elemencie z listy */
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

void SLinkedList::SwapFirstWithN(int range){
    SNode * FirstNode = head;
    SNode * FoundNode = head-> getNext();
    SNode * PrevNode = head;  
    SNode * Backup = head;  
    if (range <= Length){
        while (range != 2){
        PrevNode = FoundNode;
        FoundNode = FoundNode-> getNext();
        range--;
    }
        Backup = FoundNode->getNext();
        head = FoundNode;
        FoundNode->setNext(FirstNode->getNext()); 
        FirstNode->setNext(Backup); 
        PrevNode->setNext(FirstNode); 
    }
    else 
        std::cout << "ERR: Out of range" << std::endl;
}

    // SNode * FirstNode = head;
    // SNode * FoundNode = head-> getNext();
    // SNode * PrevNode = head;  
    // SNode * Backup = NULL;  
    // while (range != 2){
    //     PrevNode = FoundNode;
    //     FoundNode = FoundNode-> getNext();
    //     range--;
    // }
    // Backup = FoundNode->getNext();
    // head = FoundNode;
    // FoundNode->setNext(FirstNode->getNext()); 
    // FirstNode->setNext(Backup); 
    // PrevNode->setNext(FirstNode); 

/* Wyswietlenie poczatku listy*/
const std::string & SLinkedList::front() const{
    // std::cout << "1||" << head -> getElement() << std::endl;
    // std::cout << "2||" << head -> getNext() -> getElement() << std::endl;
    // std::cout << "3||" << head -> getNext() -> getNext() -> getElement() << std::endl;
    // std::cout << "4||" << head -> getNext() -> getNext() -> getNext() -> getElement() << std::endl;
    // std::cout << "5||" << head -> getNext() -> getNext() -> getNext() -> getNext() -> getElement() << std::endl;
    // std::cout << "6||" << head -> getNext()-> getNext() -> getNext() -> getNext() -> getNext() -> getElement() << std::endl;
    return  head -> getElement();
}

/* Usuniecie elementu z poczatku listy */
void SLinkedList::RemoveFront(){
    if(head != NULL){
        SNode * tmp = head;
        head = head->getNext();
        delete tmp;
    }
    else 
        std::cout << "No nodes to delete" << std::endl;
}

int SLinkedList::getLength(){
    return Length;
}