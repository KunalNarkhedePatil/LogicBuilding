#include <iostream>
#include <queue>
using namespace std;
class Demo
{
public:
    queue<int> q;

    Demo(queue<int> q)
    {
        this->q = q;
    }

    int find_position_of_element(int Key)
    {
        int iCnt = 0;
        int iFlag = -1;

        while (!q.empty())
        {
            if (q.front() == Key)
            {
                iFlag = iCnt;
                break;
            }
            iCnt++;
            q.pop();
        }
        if (iFlag == -1)
        {
            return iFlag;
        }
        else
        {
            return iFlag;
        }
    }
    void display()
    {
        queue<int> temp = q;

        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};
int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    Demo *dobj = new Demo(q);

    cout << "Elements of queue is:" << endl;
    dobj->display();
    int iRet = dobj->find_position_of_element(30);
    if (iRet == -1)
    {
        cout << "Element is not present in  the queue\n";
    }
    else
    {
        cout << "Element is present at " << iRet << " index\n";
    }
    return 0;
}