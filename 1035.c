#include <stdio.h>
int main(void) 
{
	int a,b,m,n;
	while (scanf("%d%d",&m,&n)!=EOF)
	{
		a=2*m-n/2;
		b=n/2-m;
		if (a<0||b<0||(a+b)!=m||(2*a+4*b)!=n)
		{a=-1;b=-1;}   
		printf("%d %d\n",a,b);
	}
	return 0;
}