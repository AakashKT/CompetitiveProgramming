import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int arr[] = new int[100];
		int ind[] = new int[100];

		for(int i=0;i<n;i++)
		{
			arr[i] = sc.nextInt();

			ind[i] = i;
		}

		for(int i=0;i<n;i++) 
		{
			for(int j=i;j<n;j++)
			{
				if(arr[i] >= arr[j])
				{
					int x = arr[i];
					arr[i] = arr[j];
					arr[j] = x;

					int y = ind[i];
					ind[i] = ind[j];
					ind[j] = y;
				}
			}
		}


		for(int i=0;i<n/2;i++)
		{
			System.out.println((ind[i]+1)+" "+(ind[n-i-1]+1));
		}


	}
}