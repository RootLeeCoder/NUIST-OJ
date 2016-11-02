#include <stdio.h>
int main(void) 
{
	int year,month,day;
	while (scanf("%d%d",&year,&month)!=EOF)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)   
			day=31;
		if(month==4||month==6||month==9||month==11)
			day=30;
		if(month==2&&year%4!=0)
			day=28;
		if(month==2&&year%4==0)
			day=29;
		if(month==2&&year%100==0)
			day=28;
		if(month==2&&year%400==0)
			day=29;
		printf("%d\n",day);
	}
    return 0;
}