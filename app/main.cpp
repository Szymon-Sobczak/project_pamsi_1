/*
   Przygotował Szymon Sobczak 259275.
*/

#include "List.hh"
#include "Msg.hh"

/*
   Driver przedstawiający działanie programu.
   f(n) = n^2 + 5n + ... -> O(n^2)
*/

int main(){
   Message Message_sender;
   
   // Treść wiadomości do przesłania.
   std::string word, plain_text = "Chcesz już iść? Jeszcze ranek nie tak bliski, Słowik to, a nie skowronek się zrywa I śpiewem przeszył trwożne ucho twoje. Co noc on śpiewa owdzie na gałązce Granatu, wierzaj mi, że to był słowik.";
  
   // Dzielenie wiadomości na pakiety i umieszczenia ich na liscie.
   Message_sender.ParseByWord(plain_text); // n
   
   // Treść wiadomości widziana przez nadawce.
   std::cout << "!Nadawca:" << std::endl;
   Message_sender.Print_message(); // n
   std::cout << std::endl;
   
   // Mieszanie wiadomości na liście.
   Message_sender.ScrambleMsg(); // n
   
   // Treść wiadomości po wymieszaniu kolejności pakietów.
   std::cout << std::endl << "!Pomieszana wiadomosc:" << std::endl;
   Message_sender.Print_message(); // n
   std::cout << std::endl;

   // Sorotwanie wiadomości.
   Message_sender.SortMsg(); // n^2
   
   // Treść wiadomości widziana przez odbiorcę.
   std::cout << std::endl << "!Posortowana wiadomosc:" << std::endl;
   Message_sender.Print_message(); // n
   std::cout << std::endl;
   
   return 0;
} 

