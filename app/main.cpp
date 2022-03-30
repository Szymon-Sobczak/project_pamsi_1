#include "List.hh"
#include "Msg.hh"

int main(){
   Message Message_sender;
   std::string word, plain_text = "Chcesz już iść? Jeszcze ranek nie tak bliski, Słowik to, a nie skowronek się zrywa I śpiewem przeszył trwożne ucho twoje. Co noc on śpiewa owdzie na gałązce Granatu, wierzaj mi, że to był słowik.";
   Message_sender.ParseByWord(plain_text);
   std::cout << "!Nadawca:" << std::endl;
   Message_sender.Print_message();
   std::cout << std::endl;
   Message_sender.ScrambleMsg();
   std::cout << std::endl << "!Pomieszana wiadomosc:" << std::endl;
    Message_sender.Print_message();
   std::cout << std::endl;
   Message_sender.SortMsg();
   std::cout << std::endl << "!Posorotwana wiadomosc:" << std::endl;
   Message_sender.Print_message();
   std::cout << std::endl;
   return 0;
} 