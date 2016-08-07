import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int cl = 0;
		int ml = 0;

		for(int i=0;i<n;i++)
		{
			int m = sc.nextInt();
			int c = sc.nextInt();

			if(m>c)
				ml++;
			else if(m<c)
				cl++;
		}

		if(ml>cl)
			System.out.println("Mishka");
		else if(ml<cl)
			System.out.println("Chris");
		else if(ml==cl)
			System.out.println("Friendship is magic!^^");
	}
}