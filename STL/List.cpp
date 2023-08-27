// Doubly Linked list

#include <iostream>
#include <list>
using namespace std;

class Demo
{
public:
    void displayList()
    {
        list<int> list;

        list.push_back(10);
        list.push_back(20);
        list.push_back(30);
        list.push_back(40);
        list.push_back(50);

        list.push_front(60);

        list.pop_front();
        list.pop_back();

        cout << "Print list\n";

        for (int iCnt : list)
        {
            cout << iCnt << " ";
        }
        cout<<endl;

        //in list direct accessig  is not allowd ex like using at() function
        cout << "Size of list is " << list.size() << endl;

        cout<<"Fornt->"<<list.front()<<endl;
        cout<<"Back->"<<list.back()<<endl;

        cout << endl;
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->displayList();
    return 0;
}