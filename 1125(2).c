#include <stdio.h>
double c(int k,int n);
int main(void) 
{
	double sum=0;
	int a,input;
	while (scanf("%d",&input)!=EOF)
	{   
		for (a=0;a<=input;a++)
		{
			sum=sum+c(a,input);
			input--;
		}
		printf("%.0lf\n",sum);
		sum=0;
	}
	return 0;
}
double c(int k,int n)
{
	double fz=1,fm=1,mul;
	int a;
	for(a=1;a<=n;a++)
	    fz=fz*a;
	for(a=1;a<=k;a++)
	    fm=fm*a;
	for(a=1;a<=n-k;a++)
	    fm=fm*a;
	mul=fz/fm;
	return mul;
}