#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, n;
	int count;
	scanf("%d", &t);
	
	for (int i = 1; i <= t; i++)
	{
		scanf(" N = %d", &n);

		int a[n * n];

		for (int j = 0; j < n * n; j++)
		{
			scanf("%d", &a[j]);
		}
		int g=1;
		int last=0;
		for(int k=0;k<n*n;k++)
		{	last=n*n-1;
			if(a[k]<0||a[last-k]!=a[k])g=0;
		}
		if(g==1)printf("Test #%d: Symmetric.\n", i);
		if(g==0)printf("Test #%d: Non-symmetric.\n", i);
	}

	return 0;
}
