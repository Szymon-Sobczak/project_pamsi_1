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

void SLinkedList::SwapFirstWithN(int range){
    SNode * FirstNode = head;
    SNode * FoundNode = head-> getNext();
    SNode * PrevNode = NULL;  
    SNode * Backup = NULL; 
    if ( range > 2 && range <= Length){
        for(int i = 0; i < range-2 ; i++){
            PrevNode = FoundNode;
            FoundNode = FoundNode -> getNext();
        }
        Backup = FoundNode->getNext();
        head = FoundNode;
        FoundNode->setNext(FirstNode->getNext()); 
        FirstNode->setNext(Backup); 
        PrevNode->setNext(FirstNode); 
    }
    else if(range == 2){
        FirstNode->setNext(FoundNode -> getNext());
        FoundNode->setNext(FirstNode);
        head = FoundNode;
    }
    else
        std::cerr << "ERR: Out of range" << std::endl;
}

int SLinkedList::FindSmallestID(int Distance){
    int elem_small, position=0;
    SNode * FirstNode = head;
    position  = Distance;
    for (int i=0; i < Distance; ++i){
        FirstNode = FirstNode->getNext();
    }
    elem_small = FirstNode->getID();
    for (int j = (Distance + 1); j < (Length); j++){
        if (FirstNode->getNext()->getID() < elem_small){
            elem_small = FirstNode->getNext()->getID();
            position = j;
        }
        FirstNode = FirstNode ->getNext();

    }
    return position;
}

void SLinkedList::SortList(){
    std::cout << std::endl;
    int pos;
    SNode * FirstNode = head;
    SNode * FndNode = head;
    std::string temp;
    int temp2;
    for(int i=0;i<Length;i++){
        pos = FindSmallestID(i);
        
        for (int i = 0; i < pos; i++)
            FndNode = FndNode->getNext();
           
        temp = FirstNode->getElement();
        FirstNode->setElement(FndNode->getElement());
        FndNode->setElement(temp);

        temp2 = FirstNode->getID();
        FirstNode->setID(FndNode->getID());
        FndNode->setID(temp2);

        FirstNode = FirstNode -> getNext();
        FndNode = head;
    }
}
  

int findSmallest(int myarray[],int i)
{
   int ele_small,position,j;
   ele_small = myarray[i];
   position = i;
   for(j=i+1;j<5;j++)
   {
      if(myarray[j]<ele_small)
      {
      ele_small = myarray[j];
      position=j;
      }
   }
   return position;
}


//  int myarray[5] = { 12,4,3,1,15};
//     SNode * FirstNode = head;
//     SNode * ScNode = head;
//     int l = 1;

//     for(int k=1; k < Length; k++){
      
//       while(l == k){
//             FirstNode = ScNode;
//             ScNode = ScNode->getNext();
//       }

//         int IDFst = FirstNode->getID();
//         int IDSc = ScNode->getID();
//         int j= k-1;

//       while(j>=0 && IDSc <= IDFst){
//         myarray[j+1] = myarray[j];
//         --j;
//       }
//    myarray[j+1] = temp;


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
        std::cout << "No nodes to delete" << std::endl;
}

int SLinkedList::getLength(){
    return Length;
}