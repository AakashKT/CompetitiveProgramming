import java.util.*;

public class Main {
	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for(int i=0;i<t;i++) 
		{
			int n = sc.nextInt();

			int arr[] = new int[10000000];
			int v[][] = new int[2][10000000];
			long m = 0;
			int count = 1, iti = 1;

			for(int j=1;j<=n;j++)
			{
				arr[j] = sc.nextInt();

				v[0][j] = 0;
				v[1][j] = 0;
			}

			for(int j=1;j<=n;j++)
			{
				count = 1;
				iti = j;

				if(v[1][j] == 0)
				{
					while(true)
					{
						if(v[1][iti] == 0)
						{
							v[0][iti] = count;
							v[1][iti] = j;

							int next = arr[iti] + 1 + iti;
							
							int temp = next%n;
							if(temp == 0)
								iti = n;
							else
								iti = temp;

							count++;
						}
						else if(v[1][iti] == j)
						{
							m += count - v[0][iti];
							break;
						}
						else if(v[1][iti] != j)
						{
							break;
						}
					}
				}
			}

			System.out.println(""+m);
		}

	}
}