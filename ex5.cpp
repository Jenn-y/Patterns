#include <iostream>

using namespace std;

void drawShape (int height, int width){
    /* Example (3, 10);

         ******
        ********
       **********
    */
    for(int j = 1; j <= height; j++) {
        for(int i = 1; i <= height - j; i++) cout << " ";
        for(int i = 1; i <= width - 2 * height + 2 * j; i++) cout << "*";
        cout << endl;
    }
}

int main(){

    int h, w;
    cout << "Enter height and width: ";
    cin >> h >> w;
    cout << endl;
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
