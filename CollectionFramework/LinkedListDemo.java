/*
Java LinkedList class
Java LinkedList class uses a doubly linked list to store the elements. 
It provides a linked-list data structure. 
It inherits the AbstractList class and implements List and Deque interfaces.

The important points about Java LinkedList are:

Java LinkedList class can contain duplicate elements.
Java LinkedList class maintains insertion order.
Java LinkedList class is non synchronized.
In Java LinkedList class, manipulation is fast because no shifting needs to occur.
Java LinkedList class can be used as a list, stack or queue.
 */

import java.util.LinkedList;

class Demo
{
    public void Display()
    {
        LinkedList<String> obj1=new LinkedList<>();
        obj1.add("Amol");
        obj1.add("Kunal");
        obj1.add("Ankit");
        obj1.add("Pavan");
        obj1.add("Kunal");


        System.out.println("LinkedList Elements:"+obj1);
        obj1.add(2,"Mayur");
        System.out.println("LinkedList Elements:"+obj1);

        LinkedList<String> obj2=new LinkedList<>();

        obj2.add("Pravin");
        obj2.add("Prasad");

        System.out.println("LinkedList Elements:"+obj2);

        obj1.addAll(obj2);

        System.out.println("LinkedList Elements:"+obj1);

        obj1.addAll(1,obj2);

        System.out.println("LinkedList Elements:"+obj1);

        obj1.addFirst("Bharat");
        obj1.addLast("Prasant");

        System.out.println("LinkedList Elements:"+obj1);

        LinkedList<String> obj3=(LinkedList<String>)obj1.clone();

        System.out.println("LinkedList Elements:"+obj3);

        //contains

        System.out.println("is Contains:"+obj1.contains("Pravin"));

        System.out.println("Get index:"+obj1.get(2));

        System.out.println("First and List Elements:"+obj1.getFirst()+","+obj1.getLast());

        //remove

        obj1.remove();

        System.out.println("LinkedList Elements:"+obj1);

        obj1.removeFirst();
        obj1.removeLast();

        System.out.println("LinkedList Elements:"+obj1);

        obj1.removeFirstOccurrence("Kunal");

        System.out.println("LinkedList Elements:"+obj1);

        System.out.println("Size:"+obj1.size());

    }
}
public class LinkedListDemo {
    public static void main(String[] args) {
        Demo obj=new Demo();
        obj.Display();
    }
}
