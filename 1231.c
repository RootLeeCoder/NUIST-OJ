#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i,j,k,len,memory;
	char line[255];
	while(scanf ("%s",line)!=EOF)
	{
		memory=0;
		len=strlen(line);
		for(j=0;j<len-1;j++)
		{
		    for(i=0;i<len-j-1;i++)
		    {
		        if(line[i]>line[i+1])
		        {k=line[i];line[i]=line[i+1];line[i+1]=k;}
		    }
		}
		for (i=0;i<len;i++)
		{
			if (line[i]==line[i+1]||line[i]==memory)
				{memory=line[i];line[i]=0;}
		}
		for (i=0;i<len;i++)
			if (line[i]!=0) printf("%c",line[i]);
		printf("\n");
	}
	return 0;
}