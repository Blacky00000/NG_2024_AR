#include <iostream>

using namespace std;

int main()
{
    int salary = 0;
    cout << "How much do you earn? " << endl;
    cin >> salary;

    if(salary < 1000) {
        cout << "Work harder ";
    }

    if (salary > 1000){
        if (salary > 1000000){
            cout << "Wow, you are a millionaire ";
        }
        if (salary < 1000000){
            cout << "Good job ";
        }
    }
    cout << ", but you are doing great! : " << endl;
    return 0;
}
