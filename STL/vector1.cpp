#include<vector>
#include<iostream>

using namespace std;


void insertElement(vector<int> &v)
{
    v.push_back(60);
}
int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);


    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

    insertElement(v);



    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }



    return 0;
}