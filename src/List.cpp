#include "List.hh"

/*
    Sprawdzanie czy lista jest pusta 
    f(n) = 1 -> O(1) 
*/ 

bool SLinkedList::Empty() const{ 
    if(head == NULL) // 1
        return 0;    
    else    
        return 1;    
} 

/*
    Wyswietlenie elementow listy 
    f(n) = n + 3 -> O(n) 
*/

void SLinkedList::DisplayList(){
    SNode * Adress = head; // 1
    while (Adress != NULL){ // n
        std::cout << Adress->getElement() << " "; // 1
        Adress = Adress->getNext(); // 1
    }
}

/* 
    Dodanie nowego elementu listy na jej koncu.
    f(n) = n + 9 -> O(n) 
*/

void SLinkedList::Append(const std::string & node_data){
    Length++; // 1
    SNode *newNode = new SNode(Length); // 1
    SNode *last = head; // 1 
    newNode->setElement(node_data); // 1
    newNode->setNext(NULL); // 1
    if (head == NULL){ // 1 
        head = newNode; // 1
    }
    else{
        while (last->getNext() != NULL){ // n
            last = last->getNext(); // 1
        }
        last->setNext(newNode); // 1
    }
}

/*
    Zamienianie elementu N odległo od poczatku listy z elementem dalszym- M odleglym.
    f(n) = 2n + -> O(n)
*/

void SLinkedList::SwapNWithM(int DistanceN, int DistanceM){
    if (DistanceN == DistanceM) // 1
        return; // 1
       
    if (DistanceN > Length || DistanceM > Length){ // 3
        std::cerr << "ERR: Wrong Input" << std::endl; // 1
        return; // 1
    }

    SNode *prevX = NULL, *currX = head; // 1 
    
    for(int i = 0; i < DistanceN - 1 ; i++){ // n
        prevX = currX; // 1
        currX = currX->getNext(); // 1
    }
    
    SNode *prevY = NULL, *currY = head; // 2

     for(int i = 0; i < DistanceM - 1 ; i++){ // n
        prevY = currY; // 1
        currY = currY->getNext(); // 1
    }

    if (currX == NULL || currY == NULL){ // 3
        std::cerr << "ERR: Out of range" << std::endl; // 1
        return; // 1
    }
  
    if (prevX != NULL) // 1
        prevX->setNext(currY); // 1
    else 
        head = currY; // 1
 
    if (prevY != NULL) // 1
        prevY->setNext(currX); // 1
    else 
        head = currX;// 1

    SNode* temp = currY->getNext(); // 2
    currY->setNext(currX->getNext()); // 2
    currX->setNext(temp); // 1 
}


/*
    Znalezienie wezla o najnizszym ID.
    f(n) = 2n + 29 -> O(n)
*/

int SLinkedList::FindSmallestID(int Distance){
    int SmallestID, position = Distance; // 2
    SNode *FirstNode = head; // 1
    for (int i=0; i < Distance; i++) // n + 1
        FirstNode = FirstNode->getNext(); // 1
    SmallestID = FirstNode->getID(); // 1
    for (int j = (Distance + 1); j < Length; j++){ // n 
        if (FirstNode->getNext()->getID() < SmallestID){
            SmallestID = FirstNode->getNext()->getID(); // 3
            position = j; // 1
        }
        FirstNode = FirstNode ->getNext(); // 2
    }
    return position;
}

/* 
Wyswietlenie poczatku listy
    f(n) =  -> O(n)
*/

void SLinkedList::SortList(){
    int pos;
    for(int i=0;i<Length;i++){
        pos = FindSmallestID(i);
        SwapNWithM(i+1,pos+1);
    }
}
  
/* 
    Wyswietlenie poczatku listy
    f(n) =  -> O(n)
*/
const std::string & SLinkedList::front() const{
    return  head -> getElement();
}

/* 
    Usuniecie elementu z poczatku listy

*/
void SLinkedList::RemoveFront(){
    if(head != NULL){
        SNode * tmp = head;
        head = head->getNext();
        delete tmp;
    }
    else 
        std::cerr << "No nodes to delete" << std::endl;
}
