import java.util.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int arr[] = new int[100000];
		boolean wl[] = new boolean[100000];

		for(int i=0;i<n;i++)
		{
			arr[i] = sc.nextInt();

			if(arr[i]%2 == 0)
			{
				wl[i] = true;
			}
			else
			{
				wl[i] = false;
			}

			if(i != 0)
			{
				if(wl[i] == false)
				{
					if(wl[i-1] == false)
					{
						System.out.println("2");
					}
					else
					{
						wl[i] = true;
						System.out.println("1");
					}
				}
				else
				{
					if(wl[i-1] == false)
					{
						wl[i] = true;
						System.out.println("1");
					}
					else
					{
						wl[i] = false;
						System.out.println("2");
					}
				}
			}
			else
			{
				if(wl[i] == true)
					System.out.println("1");
				else
					System.out.println("2");
			}
		}
	}
}