#include <stdio.h>
int main(void) 
{
	int a,b,n,i;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%c%d",&a,&c,&b);
		if(c=='+')
			printf("%d\n", a+b);
		if(c=='-')
			printf("%d\n", a-b);
		if(c=='*')
			printf("%d\n", a*b);
		if(c=='/')
			printf("%d\n", a/b);
	}
	return 0;
}