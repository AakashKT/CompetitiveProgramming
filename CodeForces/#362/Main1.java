import java.util.*;
import java.math.*;
import java.io.*;

public class Main1 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		long t = sc.nextLong();
		long s = sc.nextLong();
		long x = sc.nextLong();

		long tn1check=-1;
		long tn2check=-1;

		if(x>=t)
		{
			if(x-t == 0)
				tn1check = 0;
			else
				tn1check = (x-t)%s;

			if(x-t >= s && (x-t)%s == 1)
				tn2check = 0;

			if(tn1check == 0 || tn2check == 0)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
		else
			System.out.println("NO");
	}
}