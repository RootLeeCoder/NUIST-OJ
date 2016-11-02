#include <stdio.h>
#include <math.h>
int main(void) 
{
	double a,b,c;
	float p;
	double s;
	while (scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
	{
		if(a+b>c&&a+c>b&&b+c>a)
		{
			p=(a+b+c)/2;
			s=sqrt((p*(p-a)*(p-b)*(p-c)));
			printf("%.2lf\n",s);
		}
		else printf("-1\n");
	}
	return 0;
}