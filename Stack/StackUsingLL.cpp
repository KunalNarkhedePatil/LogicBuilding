#include"stackll.h"

int main()
{
   StackLL *obj=new StackLL();

   obj->push(10);
   obj->push(20);
   obj->push(30);
   obj->push(40);
   obj->push(50);

   obj->display();

   obj->pop();

   obj->display();

   if(obj->isEmpty())
   {
      cout<<"stack is empty\n";
   }
   else 
   {
      cout<<"stack is not empty\n";
   }

   cout<<"Current size of stack is "<<obj->size()<<endl;
   return 0;
}