#include <stdio.h>
int main(void) 
{
	int a,b,n,i,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   
		scanf("%d%d",&a,&b);
        if(a>=b)
			for(sum=a;(sum%a!=0)||(sum%b!=0);sum++);
		if(a<b)
			for(sum=b;(sum%a!=0)||(sum%b!=0);sum++);
		printf("%d\n",sum);
	}
	return 0;
}