#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int num1, num2 = 0;
    int number = 0;
    //int operation;
    char operation;

    cout << "- Choose and enter the operator (+, -, *, /) \n";
    cout << "- Choose more operators (m) ";
    cout << "\nI choose: ";
    cin >> operation;

    if (operation == 'm'){
        cout << "Choose an operator ( ^ (Square of ), s (Square root of ): ";
        cin >> operation;
        cout << "Write a number : " ;
        cin >> number;

        switch (operation) {
        case 's':
            cout << "√" << number << "=" << sqrt(number);
            break;
        case '^':
            cout << number << "^2=" << number * number;
            break;
        }

    } else{
        cout << "Write a num1 : " ;
        cin >> num1;

        cout << "Write a num2 : ";
        cin >> num2;

        switch (operation){
        case '+':
            cout << num1 << "+" << num2 << "=" << num1 + num2<< endl;
            break;
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2<< endl;
            break;
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2<< endl;
            break;
        case '/':
            if (num2!= 0)
                cout << num1 << "/" << num2 << "=" << static_cast<double>(num1) / num2 << endl;
            else
                cout << "Cannot divide by zero." << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
