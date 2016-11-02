#include <stdio.h>
int func(int n);
int main()
{
	int input,output;
	while(scanf("%d",&input)!=EOF)
	{
		int i;
		output=0;
		for (i=1;i<input;i++)	
			output+=func(i);
		printf("%d\n",output+1);
	}
	return 0;
}
int func(int n)
{
	while(n==2||n==1)
		return 1;
	return func(n-2)+func(n-1);
}