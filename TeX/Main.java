import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);

		while(s.hasNextLine())
		{
			boolean ev = true;
			String inp = s.nextLine();
			char arr[] = inp.toCharArray();

			for(int i=0;i<inp.length();i++)
			{
				if(ev==true && arr[i] == '"')
				{
					System.out.print("``");
					ev = false;
				}
				else if(ev==false && arr[i] == '"')
				{
					System.out.print("''");
					ev = true;
				} 
				else
					System.out.print(arr[i]);
			}
			System.out.println();
		}

	}
}