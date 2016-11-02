#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int t,i,j,n,input,output,count=0,a[1000];
	while(scanf ("%d",&n)!=EOF)
	{
		count=0;
		for (i=0;i<n;i++)
			scanf ("%d",&a[i]);
		for(j=0;j<n-1;j++)
	    {
	        for(i=0;i<n-j-1;i++)
	        {
	            if(a[i]>a[i+1])
	            {t=a[i];a[i]=a[i+1];a[i+1]=t;count++;}
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}