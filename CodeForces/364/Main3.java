import java.util.*;

public class Main3 {

	public static int getIndex(char a) {
		int tempInt = (int) a;

		if(tempInt >= 65 && tempInt <= 90)
		{
			tempInt -= 65;
		}
		else if(tempInt >= 97 && tempInt <= 122)
		{
			tempInt -= 71;
		}

		return tempInt;
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		sc.nextLine();

		int a[] = new int[54];
		int b[] = new int[54];
		int c[] = new int[54];

		boolean ab = false, bb = false, cb=false;

		String s = sc.nextLine();

		for(int i=0;i<n;i++)
		{
			char tempChar = s.charAt(i);
			int tempInt = getIndex(tempChar);

			a[tempInt]++;
			b[tempInt]++;
			c[tempInt]++;
		}

		int right=0, left=n-1;
		int len1=n, len2=n;

		for(int i=0;i<n;i++)
		{
			char one = s.charAt(right);
			char two = s.charAt(left);

			int oneInt = getIndex(one);
			int twoInt = getIndex(two);

			if(a[oneInt]-1>0 && ab==false)
			{
				right++;
				a[oneInt]--;
			}

			if(a[twoInt]-1>0 && ab==false)
			{
				left--;
				a[twoInt]--;
			}


			char temp1 = s.charAt(i);
			int tempInt1 = getIndex(temp1);

			if(b[tempInt1]-1>0 && bb==false)
			{
				b[tempInt1]--;
				len1--;
			}
			else
				bb = true;

			char temp2 = s.charAt(n-i-1);
			int tempInt2 = getIndex(temp2);

			if(c[tempInt2]-1>0 && cb==false)
			{
				c[tempInt2]--;
				len2--;
			}
			else
				cb = true;
		}

		int res = left-right+1;
		if(res >= len1)
		{
			if(len1 >= len2)
				System.out.println(""+len2);
			else
				System.out.println(""+len1);
		}
		else if(res < len1)
		{
			if(res >= len2)
				System.out.println(""+len2);
			else
				System.out.println(""+res);
		}
	}
}