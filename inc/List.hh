#include <iostream>
#include <memory>
#include <fstream>
#include <string>

class SNode{ //węzeł listy jednokier.
private:
    std::string elem; //wartość elementu listy
    int ID;
    SNode * next; //następny elem. listy
    //friend class SLinkedList; //dostęp dla listy
    public:
        SNode(int newID) {ID = newID;};
        std::string & getElement() {return elem;}
        SNode* getNext() {return next;}
        int getID() {return ID;};
        void setElement(std::string newE) {elem = newE;}
        void setNext(SNode* newN) {next = newN;}
};

class SLinkedList{
    private:
        int Length;
        SNode* head;
    public:
        SLinkedList(){Length = 0; head = NULL;}; //konstruktor
    // ~SLinkedList(); //destruktor
        bool empty() const; //sprawdzanie czy lista jest pusta
        const std::string & front() const; //zwraca pierwszy element
        void addFront(const std::string & node_data); //dodawanie na początek listy
        void Append(const std::string & node_data);
        void insertAfter(const std::string & node_data, int ID);
        void displayList();
        void removeFront(); 
        
};

// template <typename E>
// void SLinkedList<E>::displayList(struct Node *node){
//    while (node != NULL){
//       std::cout<<node->data<<"-->";
//       node = node->next;
//    }
//     if(node== NULL)
//         std::cout<<"null"; 
// } 

/*
    Definicja klasy List
*/

// template <typename E>
// void insertAfter(struct Node* prev_node, E node_data){
// if (prev_node == NULL){
//     std::cout<<"the given previous node is required,cannot be NULL"; return; } 
 
//     struct Node* newNode = new Node; 

//     newNode->data = node_data;

//     newNode->next = prev_node->next;
    
//     prev_node->next = newNode;
// }
