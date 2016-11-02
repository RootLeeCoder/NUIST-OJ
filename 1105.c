#include <stdio.h>
int zhishu(int a);
int main(void) 
{
	int input,i1,i2;
	while (scanf("%d",&input)!=EOF)
	{   
		for (i1=2;i1<input-1;i1++)
		{
			i2=input-i1;
			if (zhishu(i1)==1&&zhishu(i2)==1)
				{printf("%d+%d\n",i1,i2);break;}
		}
	}
	return 0;
}
int zhishu(int a) 
{
	int i,flag;
		if(a==2)
			{flag=1;}
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{flag=0;break;}
			if(i==a-1)
			{flag=1;break;}
		}
	return flag;
}