import java.util.regex.*;
import java.util.*;
import java.math.*;
import java.lang.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int arr[] = new int[100000];
		int max = -1, maxl=0, l=0;

		for(int i=0;i<n;i++)
		{
			arr[i] = sc.nextInt();

			if(arr[i] > max)
			{
				l++;
				max = arr[i];
			}
			else if(arr[i] < max)
			{
				if(l > maxl)
					maxl = l;

				l=1;
				max = arr[i];
			}
			else if(arr[i] == max)
			{
				if(l > maxl)
					maxl = l;

				l=1;
				
			}
		}

		if(l > maxl)
			maxl = l;

		System.out.println(""+maxl);
	}
}