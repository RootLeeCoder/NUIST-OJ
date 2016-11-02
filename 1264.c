#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int p,r,s=0,len,i,n,x,y,z=-1,zu[10];
	char a[30];
	while(scanf ("%d%d",&p,&r)!=EOF)
	{
		if (p==0&&r==0)
			break;
		s=0;z=-1;
		memset(a,'\0',30);
		scanf("%s",a);
		strupr(a);
		len=strlen(a);
		for(i=0;i<len;i++)
	    {
	            if(a[i]<='9' && a[i]>='0')
	            {
	                  n=a[i]-'0';
	            }
	            if(a[i]<='F' && a[i]>='A')
	            {
	                  n=a[i]-'A'+10;
	            }     
	            s=s*p+n;
	    }
	    y=s;
		s=s*r;
		do
		{
			x=y%r;
			z++;
			y=(y-x)/r;
			s=s/r;
			zu[z]=x;
		}
		while(s/r>0);
		for(;z>=0;z--)
		{
			if(zu[z]>9)
				printf("%c",zu[z]+55);
			else
				printf("%d",zu[z]);
		}
		printf("\n");
	}
	return 0;
}