#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,k,arr[100000],countm=0,count=0,countother=0;
		scanf("%lld",&n);
		long long int i;

		for(i=0;i<n;i++)
		{
			scanf("%lld",&k);
			if(k==-1)
				countm++;
			if(k==1)
				count++;
			if(k!=0&&k!=1&&k!=-1)
				countother++;
		}

		if(countm==0&&countother==1)
			printf("yes\n");
		else if(countother==0&&countm==1&&count==0)
			printf("yes\n");
		else if(countother==0&&countm>=0&&count>0)
			printf("yes\n");
		else if(countother==0&&countm==0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
