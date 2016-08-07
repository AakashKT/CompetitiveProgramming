import java.util.*;

public class Main3 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int q = sc.nextInt();

		int app[] = new int[300001];
		int e[] = new int[300001];

		int total = 0;

		int xe = 1;
		for(int i=1;i<=q;i++)
		{
			int et = sc.nextInt();

			if(et == 1)
			{	
				int temp = sc.nextInt();
				app[temp]++;
				e[xe] = temp;
				xe++;
				total += 1;

				System.out.println(""+total);
			}
			else if(et == 2)
			{
				int temp = sc.nextInt();

				for(int j=1;j<=i;j++)
				{
					if(e[j] == temp)
					{
						e[j] = 0;
						total--;
						app[temp]--;
					}
				}

				System.out.println(""+total);
			}
			else if(et == 3)
			{
				int temp = sc.nextInt();

				for(int j=1;j<=temp;j++)
				{
					if(app[e[j]] != 0)
					{
						total -= 1;
						app[e[j]] -= 1;
						e[j] = 0;
					}
				}

				System.out.println(""+total);
			}
		}
	}
}