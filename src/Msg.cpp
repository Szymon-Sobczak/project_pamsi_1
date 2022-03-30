#include "Msg.hh"

void Message::ParseByWord(std::string Text){
    std::istringstream ss(Text);
    std::string word;
    while (ss >> word){
        Message_text.Append(word);
    }
}

void Message::Print_message(){
    Message_text.DisplayList();
}

void Message::ScrambleMsg(){
    srand(time(0));
    for (int i = 0 ; i<10000; i++)
        Message_text.SwapNWithM(1,2 + std::rand() % (Message_text.getLength() - 2 + 1));
}

void Message::SortMsg(){
    Message_text.SortList(); 
}



