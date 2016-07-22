import java.util.*;

public class StackDemo {
	public static void main(String args[]) {
		Stack<String> s = new Stack<String>();

		s.push("A");
		s.push("K");

		System.out.println(s);

		s.pop();

		System.out.println(s);
	}
}