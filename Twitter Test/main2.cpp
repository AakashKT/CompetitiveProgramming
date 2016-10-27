/*
 * Complete the function below.
 */

    static long fac(int n) {
        if(n==0)
            return 1;
        int fin=1;
        for(int i=1;i<=n;i++) {
            fin = fin*i;
        }

        return fin;
    }

    static int krakenCount(int m, int n) {
        if(m==1 && n==1)
            return 1;
        int temp1 = (int) fac(m-1);
        int temp2 = (int) fac(n-1);
        long tt = temp1*temp2;
        int sum = (int) fac(m+n-2)/tt;

        int mi = Math.min(m-1, n-1);
        int ma = Math.max(m-1, n-1);

        if(mi-1<=0)
            sum += (ma-mi+1)/(fac(mi)*fac(ma-mi));
        else
            sum += (2 << (mi-1))*(ma-mi+1)/(fac(mi)*fac(ma-mi));

        return sum;
    }
