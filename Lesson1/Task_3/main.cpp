#include <iostream>

using namespace std;

int responser(string response) {
    cout << response << "\n";
    cout << "But you are doing great!";
    return 0;
}

int main() {
    int salary;
    cout << "How much do you earn? ";
    cin >> salary;

    if (salary < 1000) {
        return responser("Work harder");
    }

    if (salary > 1000000) {
        return responser("Wow, you are a millionaire!");
    }

    if (salary > 1000) {
        return responser("Good job!");
    }

    return responser("It`s okay!");

    /*bool isMillionaire = !(salary < 1000000);
    bool isPoor = (salary < 1000);
    bool isRich = (salary > 1000);

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

    return 0;*/
}
