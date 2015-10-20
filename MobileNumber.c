#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validation.h"

void mobilenumcheck()
{
    int len,flag=0;
    int i;
    char data[100];
    printf("Please enter 10 digit mobile number: ");
    gets(data);
    gets(data);
    len=strlen(data);
    if(len==10 && data[0]!='0')
    {
	    for(i=0;i<10;i++)
        {
    		{
            	if(isdigit(data[i]))
           		{
                	continue;
            	}
            	else
            	{
	                printf("Inavalid Mobile number\n\n");
	                flag=1;
	                break;
           	 	}
        	}
    	}    
        if(flag==0)
        {
            printf("Mobile number entered %s is correct\n\n",data);
        }
    }
    else if(len==10 && data[0]=='0')
    {
        printf("Mobile number cannot start with 0\n\n");
    }
	else
    {
        printf("Number of digits entered are %d,please enter 10 digit Mobile Number\n\n",len);
    }

}