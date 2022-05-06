//Task 1:-
//Given the string "A string." Print on one line the letter on the index 0, the pointer position and the letter t. Update the pointer to pointer+2. Then, in another line print the pointer and the letters r and g of the string (using the pointer). Create a GitHub repository with your code in it.
#include <iostream>
using namespace std;

int main() {
   char str[] = "A string.";
   char *p = str;
   cout << str[0] <<' '<< *p <<' '<<p[3]<<endl;
   p += 2;
   cout <<*p<<' '<<p[2] <<' '<<p[5];
   return 0;

}
