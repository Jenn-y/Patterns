#include <iostream>

using namespace std;

void drawShape (int a, int b){
    /* Example (1,5):

       12345
       1   5
       1   5
       1   5
       12345

    */
    cout << endl;
    for (int i = a; i <= b; i++) cout << i;
    cout << endl;
    for (int j = 1; j <= b - 2; j++){
        cout << a;
        for (int i = a; i <= b - 2; i++) cout << " ";
        cout << b << endl;
    }
    for (int i = a; i <= b; i++) cout << i;
}
int main(){

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;

    if (num2 <= 10 && num1 < num2) drawShape(num1, num2);
    else {
        while (num2 > 10 || num1 > num2){
            cout << "Invalid input. Try again: ";
            cin >> num1 >> num2;
        }
        drawShape(num1, num2);
    }
    return 0;
}
