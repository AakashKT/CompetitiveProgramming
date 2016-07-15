import java.util.regex.*;
import java.util.*;
import java.math.*;
import java.lang.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()) 
		{
			Pattern p = Pattern.compile("([\\.\\S])+");

			Matcher m = p.matcher(sc.nextLine());
			m.find();
			while(1==1) 
			{
				StringBuffer op = new StringBuffer(m.group(0));
				op.reverse();
				System.out.print(op);
				if(m.find())
					System.out.print(" ");
				else
					break;
			}
			System.out.println();
		}
	}
}