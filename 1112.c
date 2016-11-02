#include <stdio.h>
int main(void) 
{
	int i,n,max=0,min=100,a[100];
	double ave=0;
	while (scanf("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]>max)
				max=a[i];
			if (a[i]<min)
				min=a[i];
			ave=ave+a[i];
		}
		ave=(ave-max-min)/(n-2);   
		printf("%.2lf\n",ave);
		max=0;min=100;ave=0;
	}
	return 0;
}