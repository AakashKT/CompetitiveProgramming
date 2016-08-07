import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main2 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Map<Long, Long> count = new HashMap<Long, Long>();
		long ans = 0;
		for(int i=0;i<n;i++){
			long x = sc.nextLong();
			long y = 1;
			while(y < x){
				y *= 2;
			}
			while(y <= 2000000000){
				long z = y - x;
				if(count.get(z) != null){
					ans += count.get(z);
				}
				y *= 2;
			}
			if(count.get(x) == null){
				count.put(x, 1l);
			}
			else{
				count.put(x, count.get(x) + 1);
			}
		}
		System.out.println(ans);
	}
}