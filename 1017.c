#include <stdio.h>
int main(void) 
{
	int a,b,c,d,fz,fm,i,min;
	while (scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{   
		fm=b*d;
		fz=a*d+b*c;
		if(fz>=fm)
			min=fm;
		if(fz<=fm)
			min=fz;
		for(i=min;i>=2;i--)
		{
			if(fz%i==0&&fm%i==0)
			{fz=fz/i;fm=fm/i;break;}	
		}
		printf("%d/%d\n",fz,fm);
	}
	return 0;
}