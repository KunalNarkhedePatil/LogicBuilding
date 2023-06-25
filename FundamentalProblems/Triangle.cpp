#include <iostream>
using namespace std;

int main()
{
    float fBase = 0.0, fHeight = 0.0, fArea = 0.0;
    float FirstAngle = 0.0, SecondAngle = 0.0, ThirdAngle = 0.0;

    // Input

    cout << "Enter the Base and Height of Triangle" << endl;
    cin >> fBase >> fHeight;

    cout << "Enter First and Second Angle" << endl;
    cin >> FirstAngle >> SecondAngle;

    // calculate the area of triangle
    fArea = (fBase * fHeight) / 2;

    // calculate the third angle

    ThirdAngle = 180 - (FirstAngle + SecondAngle);

    cout << "Area of trianle is " << fArea << endl;
    cout << "Third triangle is " << ThirdAngle << endl;

    return 0;
}