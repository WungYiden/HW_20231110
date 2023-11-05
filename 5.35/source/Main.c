#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int a,i;
	printf("Enter index : ");
	scanf("%d", &a);	
	unsigned long long *f = (unsigned long long *)malloc(sizeof(unsigned long long)*a);
	f[0] = 0;
	f[1] = 1;
	for (i = 2; i < a; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("%llu\n", f[a-1]);
	system("pause");
}