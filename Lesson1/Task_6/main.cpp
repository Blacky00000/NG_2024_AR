#include <iostream>

using namespace std;

int main() {


    int size;
    cout << "Enter size: ";
    cin >> size;

    for (int row = 0; row < size; row++) {
        for (int backspace = 0; backspace < size - row; backspace++) {
            cout << " ";
        }
        for (int index = 0; index <= row * 2; index++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int backspace = 0; backspace < size; backspace++) {
        cout << " ";
    }
    cout << "*" << endl;
    system("pause");

    return 0;

}

