#include <stdio.h>
int main(void) 
{
	int i,j,t,input,flag=0,num[4],max,min;
	while (scanf("%d",&input)!=EOF)
	{
		while(input!=6174)
		{
			num[0]=input%10;
			num[1]=(input%100)/10;
			num[2]=(input%1000)/100;
			num[3]=input/1000;
			for(j=0;j<4;j++)
			{
				for(i=0;i<4-j-1;i++)
        		{
            		if(num[i]>num[i+1])
            		{t=num[i];num[i]=num[i+1];num[i+1]=t;}
        		}
			}
			max=num[3]*1000+num[2]*100+num[1]*10+num[0];
			min=num[0]*1000+num[1]*100+num[2]*10+num[3];
			input=max-min;
			flag++;
		}   
		printf("%d\n",flag);
		flag=0;
	}
	return 0;
}