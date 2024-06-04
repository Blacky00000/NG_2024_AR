#include <iostream>

using namespace std;

int main()
{
    int num1= 0;
    int num2 = 0;
    cout << "Write a num1 : ";
    cin >> num1;

    /* if(cin.fail())
    {
        cin.clear();
        cout << "Error - input is not a number " << endl;
        return 1;
    }*/

    cout << "Write a num2 : ";
    cin >> num2;

    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
}
