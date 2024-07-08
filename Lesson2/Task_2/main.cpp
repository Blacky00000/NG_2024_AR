#include <iostream>
using namespace std;

int main() {
    int values[20] = {0};
    int value = 0;
    int max_value = 0;

    for (int amount = 0; amount < 20; ++amount) {
        cout << "Enter value: ";
        cin >> value;

        if (value == 0){
            break;
        }

        if (value > max_value){
            max_value = value;
        }

        values[amount] = value;
    }

    for (int val : values) {
        if (val == 0) {
            break;
        }

        for (int amount = 0; amount < (max_value - val) / 2; ++amount) {
            cout << " ";
        }

        for (int amount = 0; amount < val; ++amount) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
