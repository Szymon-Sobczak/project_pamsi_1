#include "Msg.hh"

int main(){
   SLinkedList Message_sender;
   std::string word, plain_text = "Ludzie lubią wymyślać potwory i potworności Sami sobie wydają się wtedy mniej potworni wtedy jakoś lżej im się robi na sercu I łatwiej im żyć.";
   ParseByWord(plain_text, Message_sender);
   Message_sender.displayList();
   return 0;
} 