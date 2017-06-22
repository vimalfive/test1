#include<stdio.h>

void main()
{	
	int num;
	
	printf("\nEnter a number : ");
	scanf("%d", &num);
	
	if (num > 0)
		printf("\nPositive Number\n");
	else if (num < 0)	
		printf("\nNegative Number\n");
	else
		printf("\nZERO\n");
}
