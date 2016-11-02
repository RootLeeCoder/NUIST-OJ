#include <stdio.h>
int main(void) 
{
	int t,n=0,i,max=-1,min=101,score;
	double ave=0;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
	{
		n=0;ave=0;
		scanf("%d",&score);
		while (score!=-1)
		{
			n++;
			ave=ave+score;
			if (score>max)
				max=score;
			if (score<min)
				min=score;
			scanf("%d",&score);
		}
		ave=ave/n;
		printf("%d\n",n);
		printf("%d\n",max);
		printf("%d\n",min);
		printf("%.1lf\n",ave);
	}
	return 0;
}