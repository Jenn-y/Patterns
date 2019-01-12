#include <iostream>
#include <iomanip>

using namespace std;

void drawShape (int height){
    /* Example (height = 5):

           1
          123
         12345
        1234567
       123456789
    */
    cout << endl;
    if (height < 6){
        for (int i = 1; i <= height; i++){
            for (int j = i; j <= height - 1; j++) cout << " ";
            for (int j = 1; j <= i; j++) cout << j;
            for (int j = i + 1; j <= 2 * i - 1; j++) cout << j;
            cout << endl;
        }
    }
    else {
         for (int i = 1; i <= height; i++){
            for (int j = i; j <= height - 1; j++) cout << "   ";
            for (int j = 1; j <= i; j++) cout << setw(3) << j;
            for (int j = i + 1; j <= 2 * i - 1; j++) cout << setw(3) << j;
            cout << endl;
        }
    }
}

int main(){

    int h;
    cout << "Enter the height: ";
    cin >> h;
    if (h <= 20) drawShape(h);
    else {
        while (h > 20){
            cout << "Invalid input. Try again: ";
            cin >> h;
        }
        drawShape(h);
    }
    return 0;
}
