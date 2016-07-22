import java.util.*;
import java.lang.*;

public class LinkedListDemo {
	public static void main(String args[]) {
		LinkedList<String> l = new LinkedList<String>();

		l.add("A");
		l.add("B");
		l.add("C");

		System.out.println(l);

		l.add(1, "Z");

		System.out.println(l);
	}
}