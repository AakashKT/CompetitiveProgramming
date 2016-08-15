#include <stdio.h>
#include <math.h>

int mod(int n) 
{
	if(n < 0)
		return -n;
	else
		return n;
}

int main() 
{
	double a, b, n, i;
	double x, y, v;
	double d, min = -1.0000;

	scanf("%lf%lf%lf", &a, &b, &n);

	for(i=0;i<n;i++) 
	{
		scanf("%lf%lf%lf", &x, &y, &v);

		double temp = mod(x-a)*mod(x-a) + mod(y-b)*mod(y-b);
		d = temp;
		d /= v*v;

		if(min > d || min==-1.0000)
			min = d;

		printf("%lf", min);
	}

	printf("%lf\n", sqrt(min));
}