#include <iostream>
#include <map>
using namespace std;

class Demo
{
public:
    void displayMap()
    {
        map<int, string> m;

        m[1] = "Kunal";
        m[2] = "Ankit";
        m[20] = "Pavan";

        for (auto iCnt : m)
        {
            cout << iCnt.first << " " << iCnt.second << endl;
        }
        cout << "---------------------------\n";
        m.insert({5, "Mayur"});

        for (auto iCnt : m)
        {
            cout << iCnt.first << " " << iCnt.second << endl;
        }
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->displayMap();
    return 0;
}