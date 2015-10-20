#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "validation.h"

void numdivisibility()
{
	float a,b;
	float result;

	printf("Enter Dividend: ");
	scanf("%f",&a);
	printf("Enter Divisor: ");
	scanf("%f",&b);

	if(b==0)
	{
		printf("Divison is not possible as Divisor cannot be 0\n");
	}
	else
	{
		result=a/b;
		printf("Result is: %0.2f\n",result);
	}

	return;
} 