#pragma once 
#include "List.hh"
#include <ctime>
#include <cstdlib>
#include <sstream>

class Message{
    SLinkedList Message_text;
    public:
        void ParseByWord(std::string Text);
        void Print_message();
        void ScrambleMsg();
};
