#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validation.h"

void consistencycheck()
{	
	char data[100];
	char gender;
	printf("Enter following Information\n");
	printf("Enter Full name with title(Mr/Ms/Mrs): ");
	gets(data);
	gets(data);
	printf("Enter your Gender: ");
	scanf(" %c",&gender);
	if(data[2]==' '||data[3]==' ')
	{
		if(data[0]=='M'||data[0]=='m')
		{
			if((data[1]=='r'||data[1]=='R')&&(data[2]=='s'||data[2]=='S'))
			{
				if(gender=='F'||gender=='f')
					printf("Data entered is consistent!\n");
				else
					printf("Entered data is inconsistent!\n");

			}

			else if((data[1]=='s'||data[1]=='S')&& data[2]==' ')
			{
				if(gender=='F'||gender=='f')
					printf("Data entered is consistent!\n");
				else
					printf("Entered data is inconsistent!\n");

			}
			else if((data[1]=='r'||data[1]=='R')&& data[2]==' ')
			{
				if(gender=='M'||gender=='m')
					printf("Data entered is consistent!\n");
				else
					printf("Entered data is inconsistent!\n");
			}
			else
			{
				printf("Entered Information is wrong!\n");
			}
			
		}
		else
			printf("Invalid information is entered!\n");
	}
	else
	{
		printf("Entered Information is wrong!\n");
	}

}