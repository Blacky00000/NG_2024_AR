#include <iostream>

using namespace std;

int main() {
    int salary;
    cout << "How much do you earn? ";
    cin >> salary;

    /*
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
    } */

    bool isMillionaire = !(salary < 1000000);
    bool isPoor = (salary < 1000);
    bool isRich = (salary > 1000);

    //cout<< "Millionaire: " << isMillionaire << endl;
    //cout<< "Rich: " << isRich << endl;
    //cout<< "Poor: " << isPoor << endl;

    if(isPoor){
        cout << "Work harder ";
    }

    if(isRich){
        if(!isMillionaire){
            cout << "Good job ";
        }
    }

    if(isMillionaire){
        cout << "Wow, you are a millionaire ";
    }

    if(!isMillionaire){
        if(!isRich){
            if(!isPoor){
                cout << "It´s ok ";
            }
        }
    }


    cout << ", but you are doing great!" << endl;

    return 0;
}
