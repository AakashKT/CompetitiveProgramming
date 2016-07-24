import java.util.*;

public class QueueDemo {
	public static void main(String args[]) {
		QueueMe<String> q = new QueueMe<String>();

		q.add("A");
		q.add("K");
		q.add("S");

		System.out.println(q);

		System.out.println(q.remove());

		System.out.println(q);
	}
}