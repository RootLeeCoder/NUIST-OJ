#include <stdio.h>
int main(void)
{
	int n,year=2000,month=1,day=1,i,flag=0;;
	while (scanf("%d",&n)!=EOF)
	{
		if (n==-1)
            goto loop;
		for (i=1; i<=n; i++)
		{
			flag=0;
			if (year%4==0)
                flag=1;
            if (year%100==0&&year%400!=0)
                flag=0;
			day++;
			if (month==12&&day==32)
			{
				day=1;month=1;year++;
			}
			if (month==2)
			{
				if (flag==1&&day==30)
				{
					day=1;month++;
				}
				if (flag==0&&day==29)
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
			printf("%d-0%d-0%d ",year,month,day);
		}
		if (month<=9&&day>9)
		{
			printf("%d-0%d-%d ",year,month,day);
		}
		if (month>9&&day<=9)
		{
			printf("%d-%d-0%d ",year,month,day);
		}
		if (month>9&&day>9)
		{
			printf("%d-%d-%d ",year,month,day);
		}
		if (n%7==1)
            printf("Sunday\n");
        if (n%7==2)
            printf("Monday\n");
        if (n%7==3)
            printf("Tuesday\n");
        if (n%7==4)
            printf("Wednesday\n");
        if (n%7==5)
            printf("Thursday\n");
        if (n%7==6)
            printf("Friday\n");
        if (n%7==0)
            printf("Saturday\n");
		year=2000;month=1;day=1;
	}
	loop: ;
	return 0;
}