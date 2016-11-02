#include <stdio.h>
int main(void) 
{
	int n,year=2007,month=10,day=10,i;
	while (scanf("%d",&n)!=EOF)
	{
		for (i=1; i<=n; i++)
		{
			day++;
			if (month==12&&day==32)
			{
				day=1;month=1;year++;
			}
			if (month==2)
			{
				if (year%4==0&&day==30)
				{
					day=1;month++;
				}
				if (year%4!=0&&day==29)
				{
					day=1;month++;
				}
			}
			if (month==1||month==3||month==5||month==7||month==8||month==10)
			{
				if (day==32)
				{
					day=1;month++;
				}
			}
			if (month==4||month==6||month==9||month==11)
			{
				if (day==31)
				{
					day=1;month++;
				}
			}
		}
		if (month<=9&&day<=9)
		{
			printf("%d-0%d-0%d\n",year,month,day);
		}
		if (month<=9&&day>9)
		{
			printf("%d-0%d-%d\n",year,month,day);
		}
		if (month>9&&day<=9)
		{
			printf("%d-%d-0%d\n",year,month,day);
		}
		if (month>9&&day>9)
		{
			printf("%d-%d-%d\n",year,month,day);
		}
		year=2007;month=10;day=10;
	}
	return 0;
}