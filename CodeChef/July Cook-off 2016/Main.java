import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int d = sc.nextInt();

		if((a*b == c*d) || (a*d == b*c) || (a*c == b*d))
			System.out.println("Possible");
		else
			System.out.println("Impossible");
	}
}