#include <iostream>
using namespace std;

int main() {
    float bank[10] = {132.10, 904.2, 902.41, 2000.1, 150.01, 647.22, 890.04, 400.87, 100.64, 125.99};

    int operation;
    cout << "Enter an operation: " <<
        endl << "0 - deposit" <<
        endl << "1 - withdraw" <<
        endl << "2 - display all balances" <<
        endl << "3 - max balance" <<
        endl << "4 - min balance" <<
        endl;
    cin >> operation;

    int number;
    float amount;
    float max = bank[0];
    float min = bank[0];

    switch (operation){
    case 0:
        cout << "Enter a bank number: ";
        cin >> number;
        number -= 1;

        if (number < 0 || number > 10){
            cout << "Indalid bank number";
            return 0;
        }

        cout << "Enter an amount to deposit: ";
        cin >> amount;

        if (amount <= 0){
            cout << "Indalid amount";
            return 0;
        }

        bank[number] += amount;
        cout << "New bank account amount: " << bank[number];
        break;

    case 1:
        cout << "Enter a bank number: ";
        cin >> number;
        number -= 1;

        if (number < 0 || number > 10){
            cout << "Indalid bank number";
            return 0;
        }

        cout << "Enter an amount to withdraw: ";
        cin >> amount;

        if (amount <= 0){
            cout << "Indalid amount";
            return 0;
        }

        if (amount > bank[number]){
            cout << "Too big amount";
            return 0;
        }

        bank[number] -= amount;
        cout << "New bank account amount: " << bank[number];
        break;

    case 2:
        for (int k = 0; k < 10; ++k){
            cout << "Account " << k+1 << ": " << bank[k] << endl;
        }

        break;

    case 3:
        for (int k = 0; k < 10; ++k){
            if (bank[k] > max){
                max = bank[k];
            }
        }
        cout << "Max balance: " << max;

        break;

    case 4:
        for (int k = 0; k < 10; ++k){
            if (bank[k] < min){
                min = bank[k];
            }
        }
        cout << "Min balance: " << min;

        break;

    default:
        cout << "Invalid operation";
        break;
    }

    return 0;
}
