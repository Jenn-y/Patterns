#include <iostream>

using namespace std;

void drawShape (int height, int width){
    /* Example (5, 20):

        ************
       *            *
      *              *
     *                *
    ********************

    */
    for (int i = 1; i <= height - 1; i++) cout << " ";
    for (int i = 1; i <= width - 2 * height + 2; i++) cout << "*";
    cout << endl;
    for(int j = 2; j <= height - 1; j++) {
        for(int i = 1; i <= height - j; i++) cout << " ";
        cout << "*";
        for(int i = 1; i <= width - 2 * height - 2 + 2 * j; i++) cout << " ";
        cout << "*" << endl;
    }
    for (int i = 1; i <= width; i++) cout << "*";
    cout << endl;
}

int main(){

    int h, w;
    cout << "Enter two integers: ";
    cin >> h >> w;

    if ((h >= 3 && h <= 20) && (w >= 2 * h + 3 && w <= 70)) drawShape(h, w);
    else {
         while ((h < 3 || h > 20) || (w < 2 * h + 3 || w > 70)){
            cout << "Invalid input. Try again: ";
            cin >> h >> w;
        }
        drawShape(h, w);
    }
    return 0;
}
