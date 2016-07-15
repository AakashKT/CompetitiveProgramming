import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long b = in.nextLong();
            long w = in.nextLong();
            long x = in.nextLong();
            long y = in.nextLong();
            long z = in.nextLong();
            long total = 0;
            
            if(x+z < y) {
                total = (b+w)*x + w*z;
            }
            else if(y+z < x) {
                total = (b+w)*y + b*z;
            }
            else {
                total = b*x + w*y;
            }
            
            System.out.println(""+total);
        }
        
    }
}