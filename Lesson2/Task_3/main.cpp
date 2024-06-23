#include <iostream>
using namespace std;

int main() {
    int values[5] = {0};
    int value = 0;
    int max_value = 0;

    for (int i = 0; i < 5; ++i) {
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


    return 0;
}
