import java.util.regex.*;
import java.util.*;
import java.math.*;
import java.lang.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		long n = sc.nextLong();
		sc.nextLine();
		String p = sc.nextLine();
		long[] d = new long[1000000];
		long min = 0;

		for(int i=0;i<n;i++)
			d[i] = sc.nextLong();


		for(int i=0;i<n-1;i++) {
			char temp = p.charAt(i);
			char temp2 = p.charAt(i+1);

			if(temp == 'R' && temp2 == 'L')
			{
				if(d[i+1] - d[i] <= min || min==0)
					min = d[i+1] - d[i];
			}
		}

		if(min==0)
		{
			System.out.println("-1");
		} 
		else 
		{
			System.out.println(""+min/2);
		}

	}
}