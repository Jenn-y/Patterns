#include <iostream>

using namespace std;

void drawDiamond (int n){
    /* Example (n=7, n=8):

       *           *
      * *         * *
     *   *       *   *
    *     *     *     *
     *   *      *     *
      * *        *   *
       *          * *
                   *
    */
    for (int i = 1; i <= n/2; i++) cout << " ";
    cout << "*" << endl;

    for (int i = 2; i <= n/2; i++){
        for (int j = i; j <= n/2; j++) cout << " ";
        cout << "*";
        for (int j = 1; j < 2 * i - 2; j++) cout << " ";
        cout << "*" << endl;
    }
    if (n % 2 != 0){
        cout << "*";
        for (int j = 1; j <= n - 2; j++) cout << " ";
        cout << "*" << endl;
        n--;
    }
    for (int i = 1; i < n/2; i++){
        for (int j = 1; j <= i; j++) cout << " ";
        cout << "*";
        for (int j = n - 2 * i - 1; j >= 1; j--) cout << " ";
        cout << "*" << endl;
    }
    for (int i = 1; i <= n/2; i++) cout << " ";
    cout << "*" << endl;
}
int main(){
    int height;
    cout << "Enter the height: ";
    cin >> height;
    cout << endl;
    if (height >= 3 && height <= 20) drawDiamond(height);
    else {
        while (height < 3 || height > 20){
            cout << "Invalid input. Try again: ";
            cin >> height;
        }
        drawDiamond(height);
    }
    return 0;
}
