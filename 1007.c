#include <stdio.h>
int main(void) 
{
	int n,i,j,a,b,c,min;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a<=b&&a<=c)
			min=a;
		if(b<=a&&b<=c)
			min=b;
		if(c<=a&&c<=b)
			min=c;
		for(i=min;i>=2;i--)
		{
			if(a%min==0&&b%min==0&&c%min==0)
			{break;}	
		}
		printf("%d\n",i);
	}
	return 0;
}