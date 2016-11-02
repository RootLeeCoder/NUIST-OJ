#include <stdio.h>
int main ()
{
	int a,b,k,sum,n,count=0,i,num[9999];
	while(scanf ("%d%d",&sum,&n)!=EOF)
	{
		for (i=0;i<sum;i++)
			num[i]=1;
		for (k=1;k<=n;k++)
		{
			scanf ("%d%d",&a,&b);
			for (i=a-1;i<=b-1;i++)
				num[i]=0;
		}
		for (i=0;i<sum;i++)
		{
			if (num[i]==1)
				count++;
		}
		printf("%d\n",count+1);
		count=0;
	}
	return 0;
}