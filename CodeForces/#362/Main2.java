import java.util.*;
import java.util.regex.*;
import java.math.*;
import java.io.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);

		Pattern p = Pattern.compile("((\\d).(\\d+))e(\\d+)");
		String inp = sc.nextLine();

		Matcher m = p.matcher(inp);
		boolean matches = m.matches();

		if(m.group(3).equals("0") && m.group(4).equals("0"))
		{
			System.out.println(m.group(2));
		}
		else if(matches)
		{
			BigDecimal num = new BigDecimal(m.group(1));
			BigDecimal exp = new BigDecimal(m.group(4));

			BigDecimal ans = num.scaleByPowerOfTen(exp.intValue());

			System.out.println(ans.toPlainString());
		}
	}
}