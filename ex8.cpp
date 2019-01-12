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
    for (int i = 1; i < height; i++) cout << " ";
    for (int i = 1; i <= width; i++) cout << "*";
    cout << endl;
    for (int i = 2; i < height; i++){
        for (int j = i; j < height; j++) cout << " ";
        cout << "*";
        for (int j = 1; j <= width - 2; j++) cout << " ";
        cout << "*" << endl;
    }
    for (int i = 1; i <= width; i++) cout << "*";
}
int main(){
    int h, w;
    cout << "Enter height and width: ";
    cin >> h >> w;

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
