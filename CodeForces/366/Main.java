import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		int l = sc.nextInt();

		for(int i=1;i<=l;i++) 
		{
			if(i%2 != 0)
			{
				System.out.print("I hate ");
			}
			else
			{
				System.out.print("I love ");
			}

			if(i != l)
				System.out.print("that ");
			else
				System.out.print("it");
		}
		System.out.println();
	}
}