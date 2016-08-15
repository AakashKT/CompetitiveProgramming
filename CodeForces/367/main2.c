#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int binSearch(int x[100000], int l, int u, int el)
{
	int m = (l+u)/2;

	if(l==u)
	{
		if(x[l] == el)
			return m;
		if(x[l] < el && l==0)
			return -1;
		else if(x[l] > el)
			return m-1;
		else
			return m;
	}
	else if(el == x[m])
		return m;
	else if(el > x[m])
		return binSearch(x, m+1, u, el);
	else if(el < x[m])
		return binSearch(x, l, m, el);
}

int main() 
{
	int n, q, x[100000];
	long i, m, ans;

	scanf("%d", &n);

	for(i=0;i<n;i++)
		scanf("%d", &x[i]);

	qsort(x, n, sizeof(int), cmpfunc);

	scanf("%d", &q);

	for(i=0;i<q;i++)
	{
		scanf("%ld", &m);

		if(m>100000)
			ans = n-1;
		else
			ans = binSearch(x, 0, n-1, (int) m);

		printf("%ld\n", ans+1);
	}

	return 0;
}