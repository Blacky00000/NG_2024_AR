#include <iostream>
using namespace std;

int main() {
    int values[20] = {0};
    int value = 0;
    int max_value = 0;

    for (int i = 0; i < 20; ++i) {
        cout << "Enter value: ";
        cin >> value;

        if (value == 0){
            break;
        }

        if (value > max_value){
            max_value = value;
        }

        values[i] = value;
    }

    for (int val : values) {
        if (val == 0) {
            break;
        }

        for (int i = 0; i < (max_value - val) / 2; ++i) {
            cout << " ";
        }

        for (int i = 0; i < val; ++i) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
