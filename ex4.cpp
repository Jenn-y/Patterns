#include <iostream>
#include <iomanip>

using namespace std;

void drawShape (int a, int b){
    /* Example (1, 5):

           1
          12
         123
        1234
       12345
    */
    for (int i = a; i <= b; i++){
    for (int j = i; j <= b - 1; j++) cout << "   ";
    for (int j = a; j <= i; j++) cout << setw(3) << j;
    cout << endl;
   }
}
int main(){

   int num1, num2;
   cout << "Enter two integers: ";
   cin >> num1 >> num2;
   cout << endl;
   if (num2 - num1 <= 25) drawShape(num1, num2);
   else {
        while (num2 - num1 > 25){
            cout << "Invalid input. Try again: ";
            cin >> num1 >> num2;
        }
        drawShape(num1, num2);
   }
   return 0;
}
