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
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf ("%d%s%d%s",&a[i].count,a[i].name,&a[i].number,a[i].continent);
	for (i=0;i<n;i++)
	for (j=0;j<n-1-i;j++)
	{
		if (strcmp(a[j].name,a[j+1].name)==1)
		{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	}
	for (i=0;i<n;i++)
		printf ("%d %s %d %s\n",a[i].count,a[i].name,a[i].number,a[i].continent);
	return 0;
}