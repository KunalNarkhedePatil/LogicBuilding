#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Demo
{
public:
    void displayAlgorithm()
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);
        v.push_back(60);

        if (binary_search(v.begin(), v.end(), 90))
        {
            cout << "90 is present\n";
        }
        else
        {
            cout << "90 is not present\n";
        }

        int iNo1 = 10;
        int iNo2 = 20;

        cout << "Minimum element is " << min(iNo1, iNo2) << endl;
        cout << "Maximum element is " << max(iNo1, iNo2) << endl;

        cout << "Before swap\n";
        cout << iNo1 << " and " << iNo2 << endl;
        swap(iNo1, iNo2);
        cout << "After swap\n";
        cout << iNo1 << " and " << iNo2 << endl;
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->displayAlgorithm();
    return 0;
}