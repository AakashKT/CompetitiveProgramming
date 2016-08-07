import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for(int i=0;i<t;i++) 
		{
			int n = sc.nextInt();
			int m = sc.nextInt();

			int res = n*m - 1;

			if(res%2 == 0)
				System.out.println("No");
			else
				System.out.println("Yes");
		}
	}
}