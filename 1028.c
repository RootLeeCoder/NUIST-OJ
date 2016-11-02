#include <stdio.h>
#include <string.h>
int a[101][101],b[101];
int dp(int a[],int n)
{
	int sum=0,max=0,i;
	for (i=0;i<n;i++)
	{
		sum+=a[i];
		if (sum<0)
			sum=0;
		if (sum>max)
			max=sum;
	}
	return max;
}
int main()
{
	int i,j,n,z,k,sum=0,max=0;
	while (scanf("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf ("%d",&a[i][j]);
		for (i=0;i<n;i++)
			for (j=i;j<n;j++)
			{
				memset(b,0,sizeof(b));
				for (z=0;z<n;z++)
					for (k=i;k<=j;k++)
						b[z]+=a[k][z];
				sum=dp(b,n);
				if (max<sum)
					max=sum;
			}
		printf("%d\n",max);
	}
	return 0;
}