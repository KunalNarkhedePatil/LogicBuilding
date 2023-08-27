// Double ended queue
#include <iostream>
#include <deque>
using namespace std;

class Demo
{
public:
    void DisplayDeque()
    {
        deque<int> d1;

        d1.push_back(10);
        d1.push_back(20);
        d1.push_back(30);
        d1.push_back(40);
        d1.push_back(50);

        d1.push_front(60);

        d1.pop_back();
        d1.pop_front();

        for (int iCnt : d1)
        {
            cout << iCnt << " ";
        }
        cout << endl;

        cout << "Size of d1 " << d1.size() << endl;
        cout << "2nd element is " << d1.at(1) << endl;

        cout << "Front->" << d1.front() << endl;
        cout << "Back->" << d1.back() << endl;
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->DisplayDeque();
    return 0;
}