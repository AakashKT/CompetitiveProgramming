import java.util.regex.*;
import java.util.*;
import java.math.*;
import java.lang.*;

public class Main3 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int arr[] = new int[200];
		int n = sc.nextInt();

		int count = 0;

		for(int i=0;i<n;i++)
			arr[i] = sc.nextInt();

		for(int i=0;i<n;i++)
		{
			if(arr[i] == 0)
			{
				count++;
			}
			else if(arr[i] == 3)
			{
				if(i==0)
					continue;
				else if(i+1==n)
					continue;
				else if((arr[i-1] == 1 && arr[i+1] == 2) || (arr[i-1] == 2 && arr[i+1] == 1))
				{
					count++;
					i = i+1;
				}
			}
			else if(arr[i] == 2)
			{
				if(i!=0 && arr[i-1] == 2)
					count++;
			}
			else if(arr[i] == 1)
			{
				if(i!=0 && arr[i-1] == 1)
					count++;
			}
		}

		System.out.println(""+count);
	}
}