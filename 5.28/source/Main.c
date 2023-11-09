#include <stdio.h>
#include <stdlib.h>

char function(char a)
{
	if (a >= 'A'&& a <= 'Z')
		return a + 32;
	else
		return a - 32;

}

int main()
{
	char a;
	printf("Enter word : ");
	scanf("%c", &a);
	printf("Upper : %c\n",function(a));
	system("pause");
}