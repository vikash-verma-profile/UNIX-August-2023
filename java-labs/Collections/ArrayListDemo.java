package Collections;
import java.util.*;

public class ArrayListDemo {
    public static void main(String args[]){
        ArrayList<String> list=new ArrayList<String>();
        list.add("Vikash");
        Iterator it=list.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
    }
}
