
#include "List.hh"

int main(){
   SLinkedList test;
   std::string tekst = "blablabla";
   std::string tekst2 = "fifififi";
   test.addFront(tekst);
   std::cout << test.empty() << std::endl << test.front() << std::endl;
   test.addFront(tekst2);
   std::cout << test.front() << std::endl;
   return 0;
} 