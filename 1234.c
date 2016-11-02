#include <stdio.h>
#include <math.h>
int main(void) 
{
	double a,b,c,d,e,f,min,max,x,sum;
	double eps=1e-5;
	while (scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{   
		scanf("%lf%lf",&min,&max);
		sum=1;
		if ((a*pow(min,5)+b*pow(min,4)+c*pow(min,3)+d*pow(min,2)+e*min+f)>0)
		{
			while(fabs(sum)>=eps)
			{
				x=(min+max)/2;
				sum=a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*pow(x,2)+e*x+f;
				if (sum>0) min=x;
				if (sum<0) max=x;
			}
			goto loop;
		}
		if ((a*pow(min,5)+b*pow(min,4)+c*pow(min,3)+d*pow(min,2)+e*min+f)<0)
		{
			while(fabs(sum)>=eps)
			{
				x=(min+max)/2;
				sum=a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*pow(x,2)+e*x+f;
				if (sum<0) min=x;
				if (sum>0) max=x;
			}
		}
		if ((a*pow(min,5)+b*pow(min,4)+c*pow(min,3)+d*pow(min,2)+e*min+f)==0)
			x=0.0000;
		loop: ;
		printf("%.4lf\n",x);
	}
	return 0;
}