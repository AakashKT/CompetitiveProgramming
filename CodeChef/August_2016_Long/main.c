#include <stdio.h>

int arr[10000000], v[2][10000000];

int main()
{
	int t = 0, i, j;

	scanf("%d", &t);

	for(i=0;i<t;i++)
	{
		long int m = 0;
		int n = 0, count = 1, iti = 1;

		scanf("%d", &n);

		for(j=1;j<=n;j++)
		{
			scanf("%d", &arr[j]);

			v[0][j] = 0;
			v[1][j] = 0;
		}

		for(j=1;j<=n;j++)
		{
			count = 1;
			iti = j;

			if(v[1][j] == 0)
			{
				while(1==1)
				{
					if(v[1][iti] == 0)
					{
						v[0][iti] = count;
						v[1][iti] = j;

						int next = arr[iti] + 1 + iti;
						
						int temp = next%n;
						if(temp == 0)
							iti = n;
						else
							iti = temp;

						count++;
					}
					else if(v[1][iti] == j)
					{
						m += count - v[0][iti];
						break;
					}
					else if(v[1][iti] != j)
					{
						break;
					}
				}
			}
		}

		printf("%ld\n", m);
	}

	return 0;
}