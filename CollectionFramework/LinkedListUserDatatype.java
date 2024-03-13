import java.util.LinkedList;

import java.util.Iterator;

class Student
{
    public int RollNo;
    public String Name;
    public int Age;

    public Student(int RollNo,String Name,int Age)
    {
        this.RollNo=RollNo;
        this.Name=Name;
        this.Age=Age;
    }
}
class LinkedListUserDatatype
{
    public static void main(String[] args) {
        Student s1=new Student(101, "Kunal", 20);
        Student s2=new Student(102,"Mayur",24);
        Student s3=new Student(103, "Pravin", 25);

        LinkedList<Student> obj=new LinkedList<>();

        obj.add(s1);
        obj.add(s2);
        obj.add(s3);

        Iterator iobj=obj.iterator();

        while(iobj.hasNext())
        {
            Student stdItr=(Student)iobj.next();
            System.out.println("RollNo:"+stdItr.RollNo);
            System.out.println("Name:"+stdItr.Name);
            System.out.println("Age:"+stdItr.Age);
            System.out.println("-------------------------");
        }


    }
}