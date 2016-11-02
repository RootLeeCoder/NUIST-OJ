#include <string.h>
#include <stdio.h>
void change(char message[]);
int main() 
{
	char message[201];
	gets(message);
	while (strcmp(message,"START")==0)
	{   
		change(message);
		printf("%s\n",message);
		gets(message);
	}
	return 0;
}
void change(char message[])
{
	char plain[27]="VMXYZABCDEFGHIJKLMNOPQRSTU";
	char cipherEnd[201];
	int i,cipherLen;
	gets(message);
	cipherLen=strlen(message);
	for (i=0;i<cipherLen;i++)
		if(message[i]>='A'&&message[i]<='Z') message[i]=plain[message[i]-'A'];
	gets(cipherEnd);
	return;
}