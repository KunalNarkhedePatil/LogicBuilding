import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
public class ListDemo {
    public static void main(String[] args) {
        List<String> obj1=new ArrayList<>();

        obj1.add("Kunal");
        obj1.add("Pavan");
        obj1.add("Mayur");

        Iterator iobj=obj1.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        for(String obj:obj1)
        {
            System.out.println(obj);
        }
    


    }
}
