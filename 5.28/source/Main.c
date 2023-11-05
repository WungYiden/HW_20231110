#include <stdio.h>
#include <stdlib.h>

char function(char a)
{
	return a + 32;
}

int main()
{
	char a;
	printf("Enter word : ");
	scanf("%c", &a);
	printf("Upper : %c\n",function(a));
	system("pause");
}