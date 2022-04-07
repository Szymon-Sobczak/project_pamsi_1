#include "Msg.hh"

/*
    Metoda dzieląca wprowadzany tekst na poejdyńcze pakiety - węzły listy.
    f(n) = n + ... -> O(n)
*/

void Message::ParseByWord(std::string Text){
    std::istringstream ss(Text);
    std::string word;
    while (ss >> word){ // n
        Message_text.Append(word);
    }
}

/*
    Metoda wyświetlająca teść wiadomości.
    f(n) = n + ... -> O(n)
*/

void Message::Print_message(){
    Message_text.DisplayList(); // n
}

/*
    Metoda mieszająca wiadomość.
    f(n) = n + ... -> O(n)
*/

void Message::ScrambleMsg(){
    srand(time(0));
    for (int i = 0 ; i<10000; i++)
        Message_text.SwapNWithM(1,2 + std::rand() % (Message_text.getLength() - 2 + 1)); //n
}

/*
    Metoda sortująca wiadomość.
    f(n) = n^2 + ... -> O(n^2)
*/

void Message::SortMsg(){
    Message_text.SortList(); // n^2
}



