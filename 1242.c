#include <stdio.h>
int main(void)
{
	int tiger,i,x;
	long hp,thp[50000],s;
	while(scanf("%d%ld",&tiger,&hp)!=EOF)
	{
		for(i=0;i<tiger;i++)
			scanf("%d",&thp[i]);
		for(i=0;i<tiger;i++)
			for(x=0;x<tiger-1;x++)
				if(thp[x]>thp[x+1])
				{
					s=thp[x];
					thp[x]=thp[x+1];
					thp[x+1]=s;
				}
		for(i=0;hp>=0&&i!=tiger;i++)
			hp-=thp[i];
		printf("%d\n",i-1);
	}
	return 0;
}