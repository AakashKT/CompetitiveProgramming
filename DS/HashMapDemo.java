import java.util.*;

public class HashMapDemo {
	public static void main(String args[]) {
		HashMap<String, Integer> hm = new HashMap<String, Integer>();

		hm.put("Aakash", 11);
		hm.put("Manan", 10);
		hm.put("Jyotish", 9);

		System.out.println(hm);

		int aakash = hm.get("Aakash");

		System.out.println(""+aakash);
	}
}