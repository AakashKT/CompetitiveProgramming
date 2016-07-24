import java.util.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int m = sc.nextInt();

		int d[] = new int[n];
		int r[] = new int[n+1];
		long t[] = new long[m];
		long mc = n;

		int arrx[] = new int[n];

		for(int i=0;i<n;i++)
			d[i] = n;

		int c = 0;
		int c2 = n;
		for(int i=0;i<m;i++)
		{
			int y = sc.nextInt();
			int x = sc.nextInt();

			d[x-1] = 0;

			if(r[y] != 1)
			{
				r[y] = 1;

				mc -= 1;
			}

			long temp = 0;
			if(arrx[x-1] != 1)
			{
				c2--;
				temp = temp + mc*c2;
				arrx[x-1] = 1;
			}
			else
			{
				temp = temp + mc*c2;
			}

			t[c] = temp;
			c++;
		}

		for(int i=0;i<m;i++)
			System.out.print(t[i]+" ");

		System.out.println();
	}
}