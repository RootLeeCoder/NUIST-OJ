#include <stdio.h>
int main()
{
	int a,n,j;
	char s[20];
	int i=0,b;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a);
		while(a!=0)
		{
			b=a%2;
			a=a/2;
			s[i]=b;
			i++;
		}
		while(i>0)
			printf("%d",s[--i]);
		printf("\n");
	}
}