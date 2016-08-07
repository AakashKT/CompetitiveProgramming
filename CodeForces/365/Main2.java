import java.util.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int k = sc.nextInt();

		int b[][] = new int[2][100000];
		HashMap<String, Integer> s = new HashMap<>();

		long cost = 0;
		long t = 0;

		for(int i=0;i<n;i++) 
		{
			b[0][i] = sc.nextInt();
			t += b[0][i];
		}

		for(int i=0;i<k;i++)
		{
			int temp = sc.nextInt();

			b[1][temp-1] = 1;
		}

		cost = b[0][0]*b[0][n-1];

		for(int i=0;i<n-1;i++)
		{
			cost += b[0][i]*b[0][i+1];
		}

		for(int i=0;i<n;i++)
		{
			if(b[1][i] == 1 && i != 0 && i != n-1)
			{
				long temp = 0;

				if(b[1][i-1] == 1)
					temp = t - b[0][i+1] - b[0][i];
				else
					temp = t - b[0][i-1] - b[0][i+1] - b[0][i];

				temp *= b[0][i];
				cost += temp;

				t -= b[0][i];
			}
			else if(b[1][i] == 1 && i == 0)
			{
				long temp = t - b[0][1] - b[0][n-1] - b[0][0];
				temp *= b[0][i];
				cost += temp;

				t -= b[0][i];
			}
			else if(b[1][i] == 1 && i == n-1)
			{
				long temp = 0;

				if(b[0][n-1] == 1 && b[0][0] == 1)
					temp = t - b[0][n-2];
				else if(b[0][n-1] == 1)
					temp = t - b[0][n-2] - b[0][0];
				else if(b[0][0] == 1)
					temp = t - b[0][n-2] - b[0][n-1];
				else
					temp = t - b[0][n-2] - b[0][n-1] - b[0][0];

				temp *= b[0][i];
				cost += temp;

				t -= b[0][i];
			}
		}

		System.out.println(""+cost);
	}
}