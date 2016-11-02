#include <stdio.h>
#include <string.h>
#define N 100000
int main()
{
	int i=0,j=0,n1,n2;
	char s[N],t[N];
	while (scanf("%s%s",&s,&t)!=EOF)
    {
        n1=strlen(s);n2=strlen(t);
        for (i=0,j=0;i<n2;i++)
        {
            if (t[i]==s[j])
            {
                j++;
                if (j>=n1)
                {
                    printf("Yes\n");
                    goto loop;
                }
            }
        }
        printf("No\n");
        loop: ;
    }
	return 0;
}