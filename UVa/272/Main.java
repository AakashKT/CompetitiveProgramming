import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		boolean ev = true;
		while(s.hasNextLine())
		{
			String inp = s.nextLine();

			for(int i=0;i<inp.length();i++)
			{
				if(ev==true && inp.charAt(i) == '"')
				{
					System.out.print("``");
					ev = false;
				}
				else if(ev==false && inp.charAt(i) == '"')
				{
					System.out.print("''");
					ev = true;
				} 
				else
					System.out.print(inp.charAt(i));
			}
			System.out.println();
		}

	}
}