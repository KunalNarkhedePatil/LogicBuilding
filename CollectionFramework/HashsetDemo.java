import java.util.HashSet;
import java.util.Iterator;

public class HashsetDemo {
    public static void main(String[] args) {
        HashSet<String> set=new HashSet<>();

        set.add("Kunal");
        set.add("Mayur");
        set.add("Pravin");
        set.add("Kunal");
        Iterator<String> iobj=set.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }
}
