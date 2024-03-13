import java.util.Stack;
public class StackDemo {
    public static void main(String[] args) {
        Stack<String> obj=new Stack<String>();

        obj.push("Kunal");
        obj.push("Pravin");
        obj.push("Ram");
        obj.push("Ankit");

        System.out.println(obj);

        obj.pop();

        System.out.println(obj);

        System.out.println("Check empty:"+obj.isEmpty());

        System.out.println("Peek:"+obj.peek());

        System.out.println("Pop:"+obj.pop());

        System.out.println("is Contains:"+obj.contains("Kunal"));

    }
}
