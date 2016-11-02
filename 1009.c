#include <stdio.h>
int main(void) 
{
	int a=2,b,i,sum=0;
	while(scanf("%d",&b)!=EOF)
	{
		while (a<b)
		{
			if(a==2)
				sum=sum+a;
			for(i=2;i<a;i++)
			{
				if(a%i==0)
					break;
				if(i==a-1)
					{sum=sum+a;break;}
			}
			a++;
		}
		printf("%d\n",sum);
		sum=0;a=2;
	}
	return 0;
}