#include <iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int iWidth = 0;
    int Area = 0;

    cout << "Enter the Length\n";
    cin >> iLength;

    cout << "Entert the Width\n";
    cin >> iWidth;

    Area = iLength * iWidth;

    cout << "Area of rectangle is " << Area << endl;

    return 0;
}