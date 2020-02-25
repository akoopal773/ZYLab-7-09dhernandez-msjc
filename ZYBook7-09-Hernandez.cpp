#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   
   int number;
   int reminder;
   
   //cout << "Enter a positive number: ";
   cin >> number;
   
   if (number > 0) {
     while (number > 0) { 
     reminder = number % 2;
     cout << reminder;
     number = number / 2;
     }
   }
   else {
      cout << "You entered " << number << ". Number must be > 0" << endl;
   }
   cout << endl;
   
   

   return 0;
}
