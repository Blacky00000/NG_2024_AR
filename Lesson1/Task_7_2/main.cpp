#include <iostream>
#include <cmath>

using namespace std;


// радіус, координати, випадок - коли поле знаходиться в I координатній чверті , а отже центр завжи має координати в залежності від розміру кола (радіуса) і додатні


int main()
{
    double xK, yK, radius = 0;

    cout << "Konstantin wants to find artifacts. He has only a small detector. \nSpecify the radius of the field that the detector should scan: " << endl;
    cout << "The radius of the field : ";
    cin >> radius;

    int xCentr = radius;
    int yCentr = radius;

    // Координати костяхи
    cout << "Specify the coordinates (x;y) of Konstantin in the field : " << endl;
    cout << "Coordinate x : ";
    cin >> xK;
    cout << "Coordinate y : ";
    cin >> yK;

    cout << "The artifact is always located in the center of the field, this time its coordinates will be (" <<  xCentr << ";" << yCentr << ")" << endl;
    cout << "Analyzing the field for an artifact ..." << endl;

    double distance = sqrt(pow(xK - xCentr, 2) + pow(yK - yCentr, 2));

    if (radius >= distance && distance != 0){
        //cout << "Distance = √((" << xK << " - 0)^2 + (" << yK << " - 0)^2) = " << distance << endl;
        cout << "\nThe artifact is located " << distance << " measuring units from Konstantin." << endl;
    } else if (distance != 0){
        cout << "... \nThere are no Artifacts near Konstantin. Konstantin has to change his location." << endl;
    }

    if (xK == xCentr && yK == yCentr){
        cout << "\nThe artifact is near Konstantin! He has to search! " << endl;
    }

    return 0;
}
