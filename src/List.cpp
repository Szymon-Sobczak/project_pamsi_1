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
        std::cout /*<< Adress->getID() << "."*/<< Adress->getElement() << " ";
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

void SLinkedList::SwapNWithM(int DistanceN, int DistanceM){
    if (DistanceN == DistanceM)
        return;
       
    if (DistanceN > Length || DistanceM > Length){
        std::cerr << "ERR: Wrong Input" << std::endl;
        return;
    }

    SNode *prevX = NULL, *currX = head;
    
    for(int i = 0; i < DistanceN - 1 ; i++){
        prevX = currX;
        currX = currX->getNext();
    }
    
    SNode *prevY = NULL, *currY = head;

     for(int i = 0; i < DistanceM - 1 ; i++){
        prevY = currY;
        currY = currY->getNext();
    }

    if (currX == NULL || currY == NULL){
        std::cerr << "ERR: Out of range" << std::endl;
        return;
    }
  
    if (prevX != NULL)
        prevX->setNext(currY);
    else 
        head = currY;
 
    if (prevY != NULL)
        prevY->setNext(currX);
    else 
        head = currX;

    SNode* temp = currY->getNext();
    currY->setNext(currX->getNext());
    currX->setNext(temp);
}

int SLinkedList::FindSmallestID(int Distance){
    int SmallestID, position = Distance;
    SNode *FirstNode = head;
    for (int i=0; i < Distance; i++)
        FirstNode = FirstNode->getNext();
    SmallestID = FirstNode->getID();
    for (int j = (Distance + 1); j < Length; j++){
        if (FirstNode->getNext()->getID() < SmallestID){
            SmallestID = FirstNode->getNext()->getID();
            position = j;
        }
        FirstNode = FirstNode ->getNext();
    }
    return position;
}

void SLinkedList::SortList(){
    int pos;
    for(int i=0;i<Length;i++){
        pos = FindSmallestID(i);
        SwapNWithM(i+1,pos+1);
    }
}
  

/* Wyswietlenie poczatku listy*/
const std::string & SLinkedList::front() const{
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
        std::cerr << "No nodes to delete" << std::endl;
}
