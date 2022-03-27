#include "List.hh"
#include "Msg.hh"

int main(){
   Message Message_sender;
   std::string word, plain_text = "Ludzie lubią wymyślać potwory i potworności. Sami sobie wydają się wtedy mniej potworni.";
   Message_sender.ParseByWord(plain_text);
   Message_sender.Print_message();
   std::cout << std::endl;
   Message_sender.ScrambleMsg();
   Message_sender.Print_message();
   return 0;
} 