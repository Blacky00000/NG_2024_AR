#include <iostream>
#include <cmath>

using namespace std;


int main()
{

    double a, b, c;

    cout << "Solving the equation of the form - ax^2 + bx + c = 0 \n" ;
    cout << "Write a : " ;
    cin >> a;

    cout << "Write b : ";
    cin >> b;

    cout << "Write c : ";
    cin >> c;

    cout << "Finding the discriminant..." << endl;

    double D = pow(b, 2) - 4*a*c;

    cout << "D = " << b << "^2 - " << "4 * " << a << " * " << c << " = " << D << endl;


    if (D == 0) {
        double x = -b / (2*a);
        cout << "Since D is 0, the equation has a single root: \nx = -b / 2a " << x << endl;
    } else if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Since D is greater than 0, the equation has two roots: \nx1 = " << x1 << ", x2 = " << x2 << endl;
    } else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-D)/(2*a);
        cout << "Since D is less than zero, the equation has no solutions. BUT - ";
        cout << "\nYou can do it with the complex(imaginary) roots."  << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        cout << ", where i is an imaginary unit ( i = √-1 ) "  << endl;

    }
    return 0;
}
