#include <iostream>

using namespace std;

void drawShape (int h){
    /* Example (height = 6):
       *
      ***
     * ***
    *  ****
   *   *****
  ***********

  */
  for (int i = 1; i < h; i++) cout << " ";
  cout << "*" << endl;
  for (int i = 2; i < h; i++){
     for (int j = i; j < h; j++) cout << " ";
     cout << "*";
     for (int j = 1; j < i - 1; j++) cout << " ";
     for (int j = 1; j <= i; j++) cout << "*";
     cout << endl;
  }
  for (int i = 1; i < 2 * h; i++) cout << "*";
}
int main(){
    int num;
    cout << "Enter the height: ";
    cin >> num;
    cout << endl;
    if (num >= 3 && num <= 20) drawShape(num);
    else {
        while (num < 3 || num > 20){
            cout << "Invalid input. Try again: ";
            cin >> num;
        }
        drawShape(num);
    }
    return 0;
}
