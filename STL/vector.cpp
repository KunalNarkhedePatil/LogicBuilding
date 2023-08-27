// Dynamic array
#include <iostream>
#include <vector>
using namespace std;

class Demo
{
public:
   void display()
   {
      vector<int> v;
      vector<int> v1(5, 1);

      vector<int> v2(v1); // copy v1 into v2
      cout << "print v1:";
      for (int iCnt : v1)
      {
         cout << iCnt << " ";
      }
      cout << endl;
      cout << "print v2:";
      for (int iCnt : v2)
      {
         cout << iCnt << " ";
      }
      cout << endl;
      cout << "Capacity of v1 " << v1.capacity() << endl;
      v1.push_back(2);
      cout << "Capacity of v1 " << v1.capacity() << endl;
      cout << "Size of v1 " << v1.size() << endl;

      cout << "Capacity of v " << v.capacity() << endl;
      v.push_back(10);
      cout << "Capacity of v " << v.capacity() << endl;
      v.push_back(20);
      cout << "Capacity of v " << v.capacity() << endl;
      v.push_back(30);
      cout << "Capacity of v " << v.capacity() << endl;
      v.push_back(40);
      cout << "Capacity of v " << v.capacity() << endl;
      v.push_back(50);
      cout << "Capacity of v " << v.capacity() << endl;

      v.pop_back();
      cout << "Capacity of v " << v.capacity() << endl;
      v.pop_back();
      cout << "Capacity of v " << v.capacity() << endl;

      cout << "print v\n";
      for (int iCnt : v)
      {
         cout << iCnt << " ";
      }
      cout << endl;

      // other way to print

      //   for(int i=0;i<v.size();i++)
      //   {
      //      cout<<v.at(i)<<" ";
      //   }
      //   cout<<endl;

      cout << "Front Element ->" << v.front() << endl;
      cout << "Back Element ->" << v.back() << endl;
   }
};
int main()
{
   Demo *dobj = new Demo();

   dobj->display();
   return 0;
}