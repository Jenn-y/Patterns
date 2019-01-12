#include <iostream>

using namespace std;

void drawShape (int height){
    /* Example (height = 5):
           A
          ABA
         ABCBA
        ABCDCBA
       ABCDEDCBA
    */
     for (int i = 1; i <= height; i++) {
        for (int j = height- i; j >= 1; j--) cout << " ";
        for (int j = 1; j <= i; j++) cout << char('A' + j - 1);
        for (int j = i; j > 1; j--) cout << char('A' + j - 2);
        cout << endl;
        }
}
int main(){

    int h;
    cout << "Enter height: ";
    cin >> h;
    cout << endl;
    if (h >= 1 && h <= 20) drawShape(h);
    else {
        while (h < 1 || h > 20){
            cout << "Invalid input. Try again: ";
            cin >> h;
        }
        drawShape(h);
    }
    return 0;
}
