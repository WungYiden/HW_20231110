#include <stdio.h>
#include <stdlib.h>

double pow(double num,int i)
{
	int a;
	double temp;
	temp = num;
	for (a = 1; a <= i-1; a++)
	{
		num *= temp;
	}
	return num;
}
int main()
{
	double num;
	int i;
	printf("Enter number,power : ");
	scanf("%lf %d", &num, &i);
	printf("Ans : %lf\n",pow(num, i));
	system("pause");
}