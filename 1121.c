#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char a1[200],a2[200],a3[200];
	int b1[200],b2[200],b3[200];
	int n1,n2,i,j;
	while(scanf("%s%s",&a1,&a2)!=EOF)
	{
		n1=strlen(a1);n2=strlen(a2);
	    for(i=0,j=n1-1;i<n2;i++)
	    {
	        a3[j]=a2[j-(n1-n2)];
	        j--;
	    }
	    for (i=0;i<n1;i++)
	    {
	        b1[i]=a1[i]-'0';
	        b2[i]=a3[i]-'0';
	    }
	    for (i=n1-1;i>=0;i--)
	    {
	    	if ((b1[i]-b2[i]) >= 0)
	        	b3[i]=b1[i]-b2[i];
	        if ((b1[i]-b2[i]) < 0)
	        {
	            b1[i-1]-=1;
				b3[i]=10+(b1[i]-b2[i]);		
	        }
	    }
	    for (i=0;i<n1;i++)
	    {
	    	if (b3[i]!=0)
	    	printf("%d",b3[i]);
	    }
	    printf("\n");
	    for (i=0;i<200;i++)
	    {a1[i]='0';a2[i]='0';a3[i]='0';}
	}
	return 0;
}