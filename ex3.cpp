#include <iostream>

using namespace std;

void drawShape (int height){
    /* Example (height = 5):

           5
          55
         555
        5555
       55555
        5555
         555
          55
           5
    */
    for (int i = 1; i <= height; i++) {
    for (int j = height - 1; j >= i; j--) cout << " ";
    for (int j = height; j > height - i; j--) cout << height;
    cout << endl;
    }
    for (int i = 1; i < height; i++){
        for (int j = 1; j <= i; j++) cout << " ";
        for (int j = height - 1; j >= i; j--) cout << height;
        cout << endl;
    }
}

int main(){

    int h;
    cout << "Enter an integer: ";
    cin >> h;
    cout << endl;
    if (h < 10) drawShape(h);
    else {
        while (h >= 10){
            cout << "Invalid input. Try again: ";
            cin >> h;
        }
        drawShape(h);
    }
    return 0;
}
