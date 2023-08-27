// All element in set are unique and sorted manner
#include <iostream>
#include <set>
using namespace std;

class Demo
{
public:
    void displaySet()
    {
        set<int> s;

        s.insert(10);
        s.insert(50);
        s.insert(30);
        s.insert(10);
        s.insert(20);
        s.insert(20);
        s.insert(30);
        s.insert(40);

        for (int iCnt : s)
        {
            cout << iCnt << " ";
        }
        cout << endl;

        // check element is present or not

        if (s.count(50))
        {
            cout << "50 is present\n";
        }
        else
        {
            cout << "50 is not present\n";
        }

        s.clear();

        if (s.empty())
        {
            cout << "Set is empty\n";
        }
        else
        {
            cout << "Set is not empty\n";
        }
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->displaySet();
    return 0;
}