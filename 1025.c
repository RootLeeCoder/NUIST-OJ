#include <stdio.h>
int main()
{
	int n,i;
	double sum=1;
	while (scanf("%d",&n)!=EOF)
	{
		sum=1;i=0;
		while (n)
		{
			sum*=n;
			n--;
		}
		while (sum>0.9)
		{
			sum=sum/10;
			i++;
		}
		printf ("%d\n",i);
	}
	return 0;
}