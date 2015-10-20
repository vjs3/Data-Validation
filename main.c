#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validation.h"
#define YEAR 2015
#define MONTH 12
int main()
{
    int n;
    //char data[100];
    //printf("Enter your data!");
    //gets(data);
    char c;

    do{
	    printf("Chose one of the following option to be performed over your data! \n\n");
	    printf("1.Integer Validation\n2.Mobile Number Check\n3.Date Format Check\n4.Number Divisibilty\n5.Email Address Check\n6.Consistensy Check\n7.Exit\n\n");
	    scanf("%d",&n);

	    switch(n)
	    {
	    case 1: intvalidate();
	            break;
	    case 2: mobilenumcheck();
	            break;
	    case 3: dateformatcheck();
	            break;
	    case 4: numdivisibility();
	    		break;
	    case 5: emailvalidation();
	    		break;
	    case 6: consistencycheck();
	    		break;
	    case 7: return 0;
	    default: printf("Entered choice is not valid\n");
		}

	    printf("Do you want to check other functionalities also? Enter Y for yes or N for no\n");
	    scanf(" %c",&c);		
    }while(c=='y'||'Y');
}