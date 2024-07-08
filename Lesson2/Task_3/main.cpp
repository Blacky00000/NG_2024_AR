#include <iostream>
using namespace std;

int main() {
    int values[5] = {0};
    int value = 0;
    int max_value = 0;

    for(int amount = 0; amount < 5; ++amount) {
        cout << "Enter value: ";
        cin >> value;

        if (value > max_value){
            max_value = value;
        }

        values[amount] = value;
    }

    for(int amount = 0; amount < max_value; ++amount) {

        for(int amount = 0; amount < 5; ++amount) {
            if(values[amount] <= 0){
                cout << " ";
            } else {
                cout << "*";
                values[amount] -= 1;
            }
        }

        cout << endl;
    }

    return 0;
}
