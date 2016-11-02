#include <stdio.h>
int main(void) 
{
	int a,b,day;
	while (scanf("%d",&a)!=EOF)
	{
		day=a%7;
		if (day==0)
			day=7;   
		printf("%d\n",day);
	}
	return 0;
}