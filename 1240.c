#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int judge(int a,int t);
int main()
{
	int input,t,count,i,k=0,n,flag;
	while(scanf ("%d%d",&n,&input)!=EOF)
	{
		k=0;
		for (i=input+1;k<n;i++)
		{
			count=0;   
			for (t=2;t<11;t++)
			{
				if (judge(i,t)==1)
					count++;
			}
			if (count>=2)
			{printf("%d\n",i);k++;}
		}
	}
	return 0;
}
int judge(int a,int t)
{
	int flag=1,j,k=0,num1[200],num2[200];
	char s[200];
	int i=0,b;
	while(a!=0)
	{
		b=a%t;
		a=a/t;
		s[i]=b;
		i++;
	}
	while(i>0)
	num1[k++]=s[--i];
	k--;
	for(j=0;j<=k;j++)
		num2[j]=num1[k-j];
	for (j=0;j<k;j++)
	{
		if (num1[j]!=num2[j])
		{flag=0;break;}
	}
	return flag;
}