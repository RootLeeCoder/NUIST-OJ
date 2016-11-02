#include <stdio.h>
#include <string.h>
int main()
{
	char a1[200],a2[200],a3[200];
	int b1[200],b2[200],b3[200];
	int m,n,n1,n2,i,j;
	for (i=0;i<200;i++)
    {a1[i]='0';a2[i]='0';a3[i]='0';}
	while(scanf("%s%s",&a1,&a2)!=EOF)
	{
		n1=strlen(a1);n2=strlen(a2);
		if (n1>=n2) {n=n1-n2;m=n1;}
		if (n2>=n1) {n=n2-n1;m=n2;}
	    if (n2>=n1)
	    {
	        for(i=0,j=m-1;i<m-n;i++)
	        {
	            a3[j]=a1[j-n];
	            j--;
	        }
	    }
	    if (n1>n2)
	    {
	        for(i=0,j=m-1;i<m-n;i++)
	        {
	            a3[j]=a2[j-n];
	            j--;
	        }
	    }
	    for (i=0;i<m;i++)
	    {
	        if (n2>=n1)
	        b1[i]=a2[i]-'0';
	        if (n2<n1)
	        b1[i]=a1[i]-'0';
	        b2[i]=a3[i]-'0';
	    }
	    for (i=m-1;i>=0;i--)
	    {
	        b3[i]=(b1[i]+b2[i])%10;
	        if ((b1[i]+b2[i]) >= 10)
	            b1[i-1]+=1;
	    }
	    if (b1[0]+b2[0] >= 10)
	    {
	        printf("1");
	    }
	    for (i=0;i<m;i++)
	        printf("%d",b3[i]);
	    printf("\n");
	    for (i=0;i<200;i++)
    	{a1[i]='0';a2[i]='0';a3[i]='0';}
	}
	return 0;
}