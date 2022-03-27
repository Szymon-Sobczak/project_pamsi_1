#include "List.hh"
#include "Msg.hh"

int main(){
   Message Message_sender;
   std::string word, plain_text = "Ludzie lubią wymyślać potwory i potworności. Sami sobie wydają się wtedy mniej potworni.";
   Message_sender.ParseByWord(plain_text);
   std::cout << "!Nadawca:" << std::endl;
   Message_sender.Print_message();
   std::cout << std::endl;
   Message_sender.ScrambleMsg();
   std::cout << "!Pomieszana wiadomosc:" << std::endl;
   Message_sender.Print_message();
   std::cout << std::endl;
   return 0;
} 