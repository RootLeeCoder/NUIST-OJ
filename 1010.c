#include <stdio.h>
int main(void)
{
	int n,a,b,t,i=0,j;
	char s[20];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&a);
		while(a!=0)
		{
			b=a%8;
			a=a/8;
			s[i]=b;
			i++;
		}
		while(i>0)
			printf("%d",s[--i]);
		printf("\n");
		i=0;
	}
	return 0;
}