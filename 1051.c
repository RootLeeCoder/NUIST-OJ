#include <stdio.h>
int main(void) 
{
	int a,m,t,i,sum,flag=0,flag1,flag2;
	while (scanf("%d",&a)!=EOF)
	{
		if(a==2)
			{flag1=1;}
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{flag1=0;break;}
			if(i==a-1)
			{flag1=1;break;}
		}
		while(a!=0)
		{
			m=a%10;
			t=t*10+m;
			sum=t;
			a=a/10;
		}   
		if(sum==2)
			{flag2=1;}
		for(i=2;i<sum;i++)
		{
			if(sum%i==0)
			{flag2=0;break;}
			if(i==sum-1)
			{flag2=1;break;}
		}
		if ((flag1==1)&&(flag2==1))
			flag=1;
		printf("%d\n",flag);
		t=0;flag=0;
	}
	return 0;
}