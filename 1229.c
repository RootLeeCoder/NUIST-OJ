#include <stdio.h>
int main(void)
{
	int i,n,maxx;
	while (scanf("%d",&n)!=EOF)
	{
		maxx=0;
		for (int j=0;j<n;j++)
        {
            scanf ("%d",&i);
            if (i>maxx)
                maxx=i;
        }
		printf("%d\n",maxx);
	}
	return 0;
}