import java.util.regex.*;
import java.util.*;
import java.math.*;
import java.lang.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int arr[] = new int[100000];
		int count = 0;

		for(int i=0;i<n;i++) 
		{
			arr[i] = sc.nextInt();
		}

		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int temp = arr[i];
				int temp1 = arr[j];

				int res = temp + temp1;
				
				if((res & res-1) == 0)
					count++;
			}
		}

		System.out.println(""+count);
	}
}