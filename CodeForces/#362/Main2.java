import java.util.*;
import java.math.*;
import java.io.*;

public class Main2 {
	public static void main(String args[]) {
		Scanner scf = new Scanner(System.in);
		Scanner scc = new Scanner(System.in);
		Scanner scb = new Scanner(System.in);

		scf.useDelimiter("\\.");
		int a = scf.nextInt();
		BigInteger d = scf.nextBigInteger();

		String e = scc.nextLine();
		//int b = scb.nextInt();

		System.out.println(""+a+" "+d.intValue()+" ");
	}
}