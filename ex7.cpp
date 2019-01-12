#include <iostream>

using namespace std;

void drawShape (int height, int width){
    /* Example (5, 20):

    ********************
     *                  *
      *                  *
       *                  *
        ********************
    */
    for (int i = 1; i <= width; i++) cout << "*";
    cout << endl;
    for (int j = 2; j <= height - 1; j++){
        for (int i = 1; i <= j - 1; i++) cout << " ";
        cout << "*";
        for (int i = 1; i <= width - 2; i++) cout << " ";
        cout << "*" << endl;
    }
    for (int i = 1; i <= height - 1; i++) cout << " ";
    for (int i = 1; i <= width; i++) cout << "*";
    cout << endl;
}

int main(){

    int h, w;
    cout << "Enter two integers: ";
    cin >> h >> w;
    cout << endl;
    if ((h >= 3 && h <= 20) && (w >= 3 && w <= 60)) drawShape(h, w);
    else {
        while ((h < 3 || h > 20) || (w < 3 || w > 60)){
            cout << "Invalid input. Try again: ";
            cin >> h >> w;
        }
        drawShape(h, w);
    }
    return 0;
}
