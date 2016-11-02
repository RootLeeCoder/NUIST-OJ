#include <stdio.h>
int main(void) 
{
	int a,i;
	while ( scanf("%d",&a) != EOF )
	{
		if(a==2)
			{printf("Yes\n");}
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{printf("No\n");break;}
			if(i==a-1)
			{printf("Yes\n");break;}
		}
	}
	return 0;
}