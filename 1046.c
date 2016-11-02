#include <stdio.h>
int main(void) 
{
	int n,a[100];
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	printf("%d\n", a[(n-1)/2]);
	return 0;
}