#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char line[100];
	int maxlen=0,i=0,max=0,min=100,end=0,end2=0;
	int wordflag=0;
	while((line[i++]=getchar())!='\n');
	line[i]='\0';
	for (i = 0; line[i]!='\0'; i++)
	{
		if (line[i]>='a'&&line[i]<='z'||line[i]>='A'&&line[i]<='Z')
		{
			if (wordflag==0)
				wordflag=1;
			maxlen++;
		}
		else
		{
			wordflag=0;
			if (max<maxlen)
			{
				max=maxlen;
				end=i;
			}
			if (min>maxlen)
			{
				min=maxlen;
				end2=i;
			}
			maxlen=0;
		}
	}
	for (i = end-max; i < end; ++i)
		printf("%c",line[i]);
	printf("\n");
	for (i = end2-min; i < end2; ++i)
		printf("%c",line[i]);
	printf("\n");
	return 0;
}