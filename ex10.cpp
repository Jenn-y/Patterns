#include <iostream>

using namespace std;

void drawShape (int height){
    /* Example (height = 5):

      edcbabcde
       dcbabcd
        cbabc
         bab
          a
    */
    for (int i = 1; i <= height; i++){
        for (int j = i; j > 1; j--) cout << " ";
        for (int j = height - i + 1; j >= 1; j--) cout << char('a' + j - 1);
        for (int j = 2; j <= height - i + 1; j++) cout << char('a' + j - 1);
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
