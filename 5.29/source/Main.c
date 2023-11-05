#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2,temp=1;
	printf("Enter two number : ");
	scanf("%d %d",&num1,&num2);
	while (1)
	{
		if (temp%num1!=0||temp%num2!=0)
		{
			temp++;
		}
		else
			break;
	}
	printf("LCM : %d\n", temp);
	system("pause");
}