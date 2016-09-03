#include <iostream>
#include <regex>

using namespace std;

int main() 
{
	int exp, frac1, i=0;
	char frac2[10000] = {'0'};

	scanf("%d.", &frac1);

	scanf("%c", &frac2[i]);
	while(frac2[i] != 'e')
	{
		i++;
		scanf("%c", &frac2[i]);
	}

	scanf("%d", &exp);

	i=0;
	cout << frac1;
	
	while(true)
	{
		if(i<exp)
		{
			cout << frac2[i];
		}
		else if(frac2[i] == 'e')
		{
			cout << ".";
			while(i<exp)
			{
				cout << 0;
				i++;
			}
			break;
		}
		
		

		i++;
	}

	cout << endl;
}