#pragma once 
#include <iostream>
#include <memory>
#include <fstream>
#include <string>

/*
    Klasa węzła listy jednokierunkowej. 
*/

class SNode{ 
private:
    std::string elem; // Wartość elementu listy.
    int ID;           // Pirorytet węzła.
    SNode * next;     // Wskaźnik na następny elem. listy.
    public:
        SNode(int newID) {ID = newID;}; // Konstrukotr węzła.
        std::string & getElement() {return elem;}  // Gettery i settery.
        SNode* getNext() {return next;}
        int getID() {return ID;};
        void setElement(std::string newE) {elem = newE;}
        void setNext(SNode* newN) {next = newN;}
};

/*
    Klasa listy jednokierukowej
*/

class SLinkedList{
    private:
        int Length;     // Pole przetrzymujace informacje o dlugosci listy.
        SNode* head;    // Wskaznik na pierwszy element listy - nagłówek.
        int FindSmallestID(int Distance);
    public:
        SLinkedList(){Length = 0; head = NULL;}; // Konstruktor listy.
        int getLength() {return Length;}         // Getter długości listy
        bool Empty() const;                      // Sprawdzanie czy lista jest pusta.
        void Append(const std::string & node_data); // Dołącza węzeł na koniec listy.
        void DisplayList(); // Wyświetlenie całej listy.
        void SwapNWithM(int DistanceN, int DistanceM); // Zamiana N- tego elementu listy z M-tym.
        void SortList(); // Sortowanie listy z użyciem algorytmu sortowania przez wybór.
};
