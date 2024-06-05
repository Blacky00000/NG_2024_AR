#include <iostream>
#include <cmath>

using namespace std;


int main()
{

    double a, b, c, D, x, x1, x2;

    cout << "Solving the equation of the form - ax^2 + bx + c = 0 \n" ;
    cout << "Write a : " ;
    cin >> a;

    cout << "Write b : ";
    cin >> b;

    cout << "Write c : ";
    cin >> c;

    cout << "Finding the discriminant...";

    cout << "D = " << b << "^2 - " << "4 * " << a << " * " << c << " = " << pow(b, 2) - 4*a*c << endl;

    D = pow(b, 2) - 4*a*c;

    if (D == 0) {
        x = -b / (2*a);
        cout << "Since D is 0, the equation has a single root: \nx = -b / 2a " << x << endl;
    } else if (D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout << "Since D is greater than 0, the equation has two roots: \nx1 = " << x1 << ", x2 = " << x2 << endl;
    } else {
        cout << "Since D is less than zero, the equation has no solutions. BUT - ";
        cout << "\nYou can do it with the complex(imaginary) roots."  << endl;
        cout << "x1 = " << -b/(2*a) << " + " << sqrt(-D)/(2*a) << "i" << endl;
        cout << "x2 = " << -b/(2*a) << " - " << sqrt(-D)/(2*a) << "i" << endl;
        cout << ", where i is an imaginary unit ( i = √-1 ) "  << endl;

    }
    return 0;
}
