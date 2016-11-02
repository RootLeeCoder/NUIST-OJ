#include <stdio.h>
int main(void) 
{
	int s,n,j,i,k=1,a[80][80];
	while (scanf("%d",&n)!=EOF)
	{
		for (s=1;s<=(n/2);s++)
		{
			for (i=s-1;i<n-s;i++)
				{a[s-1][i]=k;k++;}
			for (i=s-1;i<n-s;i++)
				{a[i][n-s]=k;k++;}
			for (i=s-1;i<n-s;i++)
				{a[n-s][n-1-i]=k;k++;}
			for (i=s-1;i<n-s;i++)
				{a[n-1-i][s-1]=k;k++;}
		}
		if (n%2==1)
			a[n/2][n/2] = k;
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (j<n-1)
					printf("%d ",a[i][j]);
				if (j==n-1)
					printf("%d",a[i][j]);
			}
			printf("\n");
		}
		k=1;
	}
	return 0;
}