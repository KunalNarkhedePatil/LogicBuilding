import java.util.*;  
class Demo
{
    public void Display()
    {
        ArrayList<String> obj1 = new ArrayList<String>();

        obj1.add("Kunal");
        obj1.add("Pavan");
        obj1.add("Prasad");

        System.out.println("Elements of ArrayList:"+obj1);

        obj1.add(2, "Ankit");

        System.out.println("Elements of ArrayList:"+obj1);

        ArrayList<String> obj2=new ArrayList<>();

        //Adding element

        obj2.add("Ram");
        obj2.add("Sham");

        obj1.addAll(obj2);

        System.out.println("Elements of ArrayList:"+obj1);

        //removing elements

        obj1.remove("Prasad");

        System.out.println("Elements of ArrayList:"+obj1);

        obj1.remove(2);

        System.out.println("Elements of ArrayList:"+obj1);

        //size

        System.out.println("Size:"+obj1.size());

        //contains

        System.out.println("It Contains:"+obj1.contains("Ram"));
        System.out.println("It Contains:"+obj1.contains("Mayur"));

        System.out.println("Contains all:"+obj1.containsAll(obj2));

        //display

        //through iterator

        Iterator<String> iobj=obj1.iterator();

        while(iobj.hasNext())
        {
            System.out.print(iobj.next()+",");
        }
        System.out.println();
        //through forEach loop

        for(String obj:obj1)
        {
            System.out.print(obj+",");
        }
        System.out.println();

        //check empty

        System.out.println("Check empty:"+obj1.isEmpty());

        //check Equal

        System.out.println("Check Equal:"+obj1.equals(obj2));

        System.out.println("hashCodeL"+obj1.hashCode());

        obj1.clear();

        System.out.println(obj1);

        System.out.println("Check empty:"+obj1.isEmpty());


    }
}
class ArrayListDemo
{
    public static void main(String[] args) {
        Demo dobj=new Demo();

        dobj.Display();
    }
}