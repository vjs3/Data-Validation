#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validation.h"
#define YEAR 2015
#define MONTH 12

void dateformatcheck()
{
        int day, month, year, flag = 0;
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31};
        char str[100];

        /* get the input date from the user */
        printf("Enter your input date(DD/MM/YYYY):");
        scanf("%s",str);
        str[strlen(str) - 1] = '\0';

        /* i/p day, month and year from the above string from user */
        sscanf(str, "%d/%d/%d", &day, &month, &year);

        /* year should not be greater than current year */
        if (year > YEAR || year <= 0) {
                printf("Invalid Date!!\n");
                return ;
        }

        /* only 12 months in a year */
        if (month > MONTH || month <= 0) {
                printf("Invalid Date!!\n");
                return ;
        }

        /* leap year check if month is february */
        if (month == 2) {
                if (year % 100 == 0) {
                        if (year % 400 == 0) {
                                flag = 1;
                        }
                } else if (year % 4 == 0) {
                        flag = 1;
                }
                if (day > (daysInMonth[month - 1] + flag) && day>29) {
                        printf("Invalid Date !!\n");
                        return ;
                }
                /*else if(daysInMonth[month - 1] + flag==29)
                {
                	printf("Valid date!\n\n");
                }*/
        }

        /* check whether day is valid or not */
        if (day > daysInMonth[month - 1] || day<=0) {
                printf("Invalid Date!!\n");
                return ;
        }


        /* print the result */
        printf("Valid Date!!\n");
        return ;
}
