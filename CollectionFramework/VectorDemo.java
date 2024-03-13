import java.util.*;

public class VectorDemo {
    public static void main(String[] args) {
        Vector<Integer> vector = new Vector<>();
        vector.add(10);
        vector.add(20);
        System.out.println("1. add(element): " + vector);
        
        ArrayList<Integer> list = new ArrayList<>();
        list.add(30);
        list.add(40);
        vector.addAll(list);
        System.out.println("2. addAll(collection): " + vector);
        
        vector.addElement(50);
        vector.addElement(60);
        System.out.println("3. addElement(element): " + vector);
        
        System.out.println("4. capacity(): " + vector.capacity());
        
        vector.clear();
        System.out.println("5. clear(): " + vector);
        
        Vector<Integer> cloneVector = (Vector<Integer>) vector.clone();
        System.out.println("6. clone(): " + cloneVector);
        
        System.out.println("7. contains(20): " + vector.contains(20));
        
        System.out.println("8. containsAll(list): " + vector.containsAll(list));
        
        System.out.println("10. elementAt(0): " + vector.elementAt(0));
        
        Enumeration<Integer> enumeration = vector.elements();
        System.out.print("11. elements(): ");
        while (enumeration.hasMoreElements()) {
            System.out.print(enumeration.nextElement() + " ");
        }
        System.out.println();
        
        Vector<Integer> anotherVector = new Vector<>();
        anotherVector.addAll(cloneVector);
        System.out.println("13. equals(anotherVector): " + vector.equals(anotherVector));
        
        System.out.println("14. firstElement(): " + vector.firstElement());
        
        vector.forEach(element -> System.out.print(element + " "));
        System.out.println();
        
        System.out.println("16. get(1): " + vector.get(1));
        
        System.out.println("17. hashCode(): " + vector.hashCode());
        
        System.out.println("18. indexOf(30): " + vector.indexOf(30));
        
        vector.insertElementAt(25, 2);
        System.out.println("19. insertElementAt(25, 2): " + vector);
        
        System.out.println("20. isEmpty(): " + vector.isEmpty());
        
        Iterator<Integer> iterator = vector.iterator();
        System.out.print("21. iterator(): ");
        while (iterator.hasNext()) {
            System.out.print(iterator.next() + " ");
        }
        System.out.println();
        
        System.out.println("22. lastElement(): " + vector.lastElement());
        
        System.out.println("23. lastIndexOf(30): " + vector.lastIndexOf(30));
        
        ListIterator<Integer> listIterator = vector.listIterator();
        System.out.print("24. listIterator(): ");
        while (listIterator.hasNext()) {
            System.out.print(listIterator.next() + " ");
        }
        System.out.println();
        
        vector.remove((Integer) 30);
        System.out.println("25. remove(30): " + vector);
        
        vector.removeAll(list);
        System.out.println("26. removeAll(list): " + vector);
        
        vector.removeAllElements();
        System.out.println("27. removeAllElements(): " + vector);
        
        vector.add(10);
        vector.add(20);
        vector.removeElement(10);
        System.out.println("28. removeElement(10): " + vector);
        
        vector.add(30);
        vector.removeElementAt(0);
        System.out.println("29. removeElementAt(0): " + vector);
        
        vector.set(0, 100);
        System.out.println("34. set(0, 100): " + vector);
        
        vector.setElementAt(200, 0);
        System.out.println("35. setElementAt(200, 0): " + vector);
        
        System.out.println("37. size(): " + vector.size());
        
        vector.sort(Comparator.reverseOrder());
        System.out.println("38. sort(Comparator.reverseOrder()): " + vector);
        
        Integer[] array2 = vector.toArray(new Integer[0]);
        System.out.print("41. toArray(): ");
        for (Integer element : array2) {
            System.out.print(element + " ");
        }
        System.out.println();
        
        System.out.println("42. toString(): " + vector.toString());
    }
}
