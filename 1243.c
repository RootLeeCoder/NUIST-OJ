#include <stdio.h>
#include <string.h>
typedef struct
{
	int count;
	char name[20];
	int number;
	char continent[20];
}COUNTRY;
int main()
{
	int n,i,j;
	COUNTRY t,a[200];
	while(scanf ("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
			scanf ("%d%s%d%s",&a[i].count,a[i].name,&a[i].number,a[i].continent);
		for (j=0;j<n;j++)
		{
			if (strcmp(a[j].name,"China")==0)
			{t=a[j];a[j]=a[n-1];a[n-1]=t;}
		}
		for (i=0;i<n-1;i++)
		for (j=0;j<n-2-i;j++)
		{
			if (strcmp(a[j].name,a[j+1].name)==1)
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
		for (i=0;i<n;i++)
			printf ("%d %s %d %s\n",a[i].count,a[i].name,a[i].number,a[i].continent);
	}
	return 0;
}