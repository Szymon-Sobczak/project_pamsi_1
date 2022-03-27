#pragma once 
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
        bool Empty() const; //sprawdzanie czy lista jest pusta
        const std::string & front() const; //zwraca pierwszy element
        void AddFront(const std::string & node_data); //dodawanie na początek listy
        void Append(const std::string & node_data);
        void insertAfter(const std::string & node_data, int ID);
        void SwapFirstWithN(int ID);
        void DisplayList();
        void RemoveFront(); 
        int getLength();
        
};

