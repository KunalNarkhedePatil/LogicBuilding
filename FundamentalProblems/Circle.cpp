#include <iostream>
using namespace std;

int main()
{
    float fRadius = 0.0, fDiameter = 0.0, fCircumference = 0, fArea = 0.0;
    float PI = 3.14;

    // Input

    cout << "Enter the Radius" << endl;
    cin >> fRadius;

    fDiameter = 2 * fRadius;
    fCircumference = PI * fDiameter;
    fArea = PI * fRadius * fRadius;

    // Output
    cout << "Diameter of circle is " << fDiameter << " units " << endl;
    cout << "Circumference of cicle is " << fCircumference << " units " << endl;
    cout << "Area of circle is " << fArea << " units" << endl;

    return 0;
}