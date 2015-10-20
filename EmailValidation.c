#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "validation.h"

void emailvalidation()
{
	char data[100];
	int count=0;
	int dot=0;
	printf("Enter valid email-address: ");
	//scanf("%s",data);
	gets(data);
	gets(data);
	int len= strlen(data);
	int i;
	for(i=0;i<len;i++)
	{
		if(data[i]=='@')
		{
			count++;
		}
	}

	for(i=0;i<len;i++)
	{
		if(data[i]=='.')
		{
			dot++;
		}
	}
	if(count==1 && dot>=1)
	{
		printf("%s is a valid email address\n\n",data);
	}
	else
	{
		printf("%s is a invalid email address\n\n",data);
	}

	return;
}