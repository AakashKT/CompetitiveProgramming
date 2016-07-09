import java.util.*;
import java.math.*;
import java.io.*;

public class Main {

	public static int arr[] = new int[1000000];

	public static long next(long a) {
		if(a%2==0)
			return a/2;
		else
			return 3*a+1;
	}

	public static int cycleLength(long a) {
		if(a==1)
			return 1;

		if(a < 1000000 && arr[(int)a] != 0)
			return arr[(int)a];

		int cyc = 1 + cycleLength(next(a));

		if(a < 1000000)
			arr[(int)a] = cyc;

		return cyc;
	}

	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);

		while(s.hasNextInt()) 
		{
			int x = s.nextInt();
			int y = s.nextInt();

			int max = -1;

			int a = Math.min(x, y);
			int b = Math.max(x, y);

			for(int i=a;i<=b;i++) 
			{
				max = Math.max(cycleLength(i), max);
			}

			System.out.print(""+x+" "+y+" ");
			System.out.println(max);
		}
	}
}