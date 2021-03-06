#pragma once 
#include "List.hh"
#include <ctime>
#include <cstdlib>
#include <sstream>

/*
    Klasa Wiadomości. 
*/

class Message{
    // Pole będące listą jednokierunkową zawierającą podzieloną na pakiety wiadomość.
    SLinkedList Message_text;
    public:
        void ParseByWord(std::string Text); // Metoda dzieląca tekst na pojedyńcze pakiety. 
        void Print_message(); // Metda wyswietlająca treść wiadomości.
        void ScrambleMsg();   // Metoda mieszająca kolejść słów w wiadomości
        void SortMsg();       // Metoda sortująca elementy wiadomości.
};

