import java.util.regex.*;
import java.util.*;
import java.math.*;
import java.lang.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int m = sc.nextInt();

		sc.nextLine();

		int r = 0;
		int count = 0;
		int max = -1;
		int maxi = -1;

		boolean f = false;
		boolean no = false;

		int x=0, y=0;

		char arr2[][] = new char[1000][1000];

		for(int i=0;i<n;i++) 
		{
			count = 0;
			String ip = sc.nextLine();

			for(int j=0;j<m;j++)
			{
				char temp = ip.charAt(j);
				arr2[i][j] = temp;

				if(temp=='*')
					count++;
			}

			if(count > max)
			{
				max = count;
				maxi = i;
			}
		}

		y = maxi;

		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j!=maxi)
				{
					if(arr2[j][i] == '*' && f==true)
					{
						no = true;
					}
					else if(arr2[j][i] == '*' && f==false)
					{
						x = i;
						f = true;
						j = n+1;
					}
				}
			}
		}

		if(no==true)
			System.out.println("NO");
		else
		{
			System.out.println("YES");
			System.out.println(""+(y+1)+" "+(x+1));
		}
	}
}