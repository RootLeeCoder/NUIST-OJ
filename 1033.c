#include <stdio.h>
int main(void) 
{
	int n,i,j,t,a[1010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        if(a[i]>a[i+1])
        {t=a[i];a[i]=a[i+1];a[i+1]=t;}
    }
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
    printf("%d\n",a[i]);
	return 0;
}