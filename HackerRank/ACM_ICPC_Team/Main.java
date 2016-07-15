import java.io.*;
import java.util.*;
import java.math.*;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
        String[] arr = new String[600];
        BigInteger[] arr2 = new BigInteger[600];
        
        int max = -1;
        int teams = 1;
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        sc.nextLine();
        
        for(int i=0;i<n;i++) {
            arr[i] = sc.nextLine();
        }
        
        for(int i=0;i<n;i++) {
            arr2[i] = new BigInteger(arr[i], 2);
        }
        
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(j!=i) {
                    BigInteger res = arr2[i].or(arr2[j]);
                    int cmp=0;
                    
                    for(int k=0;k<m;k++) {
                        if(res.testBit(k))
                            cmp++;
                    }
                    
                    if(cmp > max) {
                        max = cmp;
                        teams = 1;
                    }
                    else if(cmp == max) {
                        teams++;
                    }
                }
            }
        }
        
        System.out.println(""+max);
        System.out.println(""+teams);
	}
}