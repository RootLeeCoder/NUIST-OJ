#include <stdio.h>
int main(void) 
{
	int input,num[80],a1=0,a2=0,b,i=0,j;
	char s[80];
	while (scanf("%d",&input)!=EOF)
	{   
		while(input!=0)
		{
			b=input%2;
			input=input/2;
			s[i]=b;
			i++;
		}
		for (j=0;j<=i;j++)
		{
			if (s[j]==1)
				a1++;
			if (s[j]==0)
				a2++;
		}
		printf("%d\n%d\n",a1,a2-1);
		a1=0;a2=0;i=0;
	}
	return 0;
}