#include <stdio.h>
int count(int m,int n)
{
    if (n==1||m==0) return 1;
    if (m<n) return count(m,m);
    return count(m,n-1)+count(m-n,n);
}
int main()
{
    int m,n,sum=0;
    while(scanf ("%d",&m)!=EOF)
    {
        n=m;
        sum=count(m,n);
        printf("%d\n",sum-1);
    }
    return 0;
}