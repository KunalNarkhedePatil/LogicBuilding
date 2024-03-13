import java.util.ArrayList;

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
public class ArrayListUserDatatype {
    public static void main(String[] args) {
        Student s1=new Student(101,"Kunal",23);
        Student s2=new Student(102, "Ankit", 25);
        Student s3=new Student(103,"Pavan",26);
    
        ArrayList<Student> obj=new ArrayList<Student>();  
    
        obj.add(s1);
        obj.add(s2);
        obj.add(s3);

        //Iterator

        Iterator<Student> iobj=obj.iterator();

        while(iobj.hasNext())
        {
            Student stdItr=(Student)iobj.next();
            System.out.println("RollNo:"+stdItr.RollNo);
            System.out.println("Name:"+stdItr.Name);
            System.out.println("Age:"+stdItr.Age);
            System.out.println("-----------------------");
        }




    
    }

 
    
}
