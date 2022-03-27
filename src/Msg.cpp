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
    Message_text.SwapFirstWithN(3);
    int number = 4;
    srand(time(0));
    for (int i = 0 ; i<10000; i++){
        number = 2 + std::rand() % (Message_text.getLength() - 2 + 1);
        Message_text.SwapFirstWithN(number);
    }
}

