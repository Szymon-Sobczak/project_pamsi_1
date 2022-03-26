#include "Msg.hh"

void ParseByWord(std::string Text, SLinkedList & List){
    std::istringstream ss(Text);
    std::string word;
    while (ss >> word){
        List.Append(word);
    }
}