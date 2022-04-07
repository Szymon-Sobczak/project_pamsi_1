#include "List.hh"

/*
    Metoda sprawdzająca czy lista jest pusta.  
    f(n) = 1 -> O(1) 
*/ 

bool SLinkedList::Empty() const{ 
    if(head == NULL) 
        return 0;    
    else    
        return 1;    
} 

/*
    Metoda wyświetlająca zawartość - treść pakietu - wszystkich elementów listy. 
    f(n) = n + ... -> O(n) 
*/

void SLinkedList::DisplayList(){
    SNode * Adress = head; 
    while (Adress != NULL){ // n
        std::cout << Adress->getElement() << " "; 
        Adress = Adress->getNext(); 
    }
}

/* 
    Metoda dodająca nowy węzeł na końcu listy. 
    f(n) = n + ... -> O(n) 
*/

void SLinkedList::Append(const std::string & node_data){
    Length++; 
    SNode *newNode = new SNode(Length); 
    SNode *last = head; 
    newNode->setElement(node_data); 
    newNode->setNext(NULL); 
    if (head == NULL){ 
        head = newNode;
    }
    else{
        while (last->getNext() != NULL){ // n
            last = last->getNext();
        }
        last->setNext(newNode); 
    }
}

/*
    Metoda zamieniająca element N odległy od poczatku listy z elementem dalszym- M odleglym.
    Metoda wykorzystuje w tym celu zamianę wskaźników w polu head listy jak i zmianę w polach wezłów - next. 
    f(n) = 2n + ... -> O(n)
*/

void SLinkedList::SwapNWithM(int DistanceN, int DistanceM){
    if (DistanceN == DistanceM) 
        return; 
       
    if (DistanceN > Length || DistanceM > Length){ 
        std::cerr << "ERR: Wrong Input" << std::endl; 
        return; 
    }

    SNode *prevX = NULL, *currX = head; 
    
    for(int i = 0; i < DistanceN - 1 ; i++){ // n
        prevX = currX; 
        currX = currX->getNext(); 
    }
    
    SNode *prevY = NULL, *currY = head; 

     for(int i = 0; i < DistanceM - 1 ; i++){ // n
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


/*
    Znalezienie wezla o najnizszym priorytecie.
    f(n) = 2n + ... -> O(n)
*/

int SLinkedList::FindSmallestID(int Distance){
    int SmallestID, position = Distance; 
    SNode *FirstNode = head; 
    for (int i=0; i < Distance; i++) // n 
        FirstNode = FirstNode->getNext(); 
    SmallestID = FirstNode->getID(); 
    for (int j = (Distance + 1); j < Length; j++){ // n 
        if (FirstNode->getNext()->getID() < SmallestID){
            SmallestID = FirstNode->getNext()->getID(); 
            position = j; 
        }
        FirstNode = FirstNode ->getNext(); 
    }
    return position;
}

/* 
Wyswietlenie poczatku listy
    f(n) = 2n^2 + ... -> O(n^2)
*/

void SLinkedList::SortList(){
    for(int i=0;i<Length;i++){ // n
        SwapNWithM(i+1,FindSmallestID(i)+1); //2n 
    }
}