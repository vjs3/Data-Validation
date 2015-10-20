#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "validation.h"

void intvalidate()
{
    char c;
    int i,k=0;
    char data[100];
    char remdata[100];
    int flag=1;
    int ans=0;
    int fl_ag=0;
    printf("Enter your data: ");
    gets(data);
    gets(data);
    int l=strlen(data);

    for(i=0;i<l;i++)
    {
        if(isdigit(data[i]))
        {
            continue;
        }
        else
        {
            printf("Data Entered by you is not valid");
            printf("\n");
            printf("Do you want to correct it or not,enter Y or N?\n");
            scanf(" %c",&c);
            if(c=='N' || c=='n')
            {
                printf("Next time enter correct data\n");
                return ;
            }
            else
            {
                fl_ag=1;
                break;
            }
        }
    }

    if(fl_ag==0)
    {
        printf("Entered data %s is Valid ",data);
    }
    else
    {
    k=0;
    int pos[100];
    for(k=0;i<l;i++)
    {
        if(isdigit(data[i]))
            continue;
        else
        {
            remdata[k]=data[i];
            pos[k]=i;
            k++;
        }
    }
    remdata[k]='\0';
    printf("Incorrect data!");
    for(i=0;i<k;i++)
    {
        printf("Data at position %d is %c\n",pos[i]+1,remdata[i]);
        printf("Enter valid integer at this position :");
        char v[100];
        scanf("%s",v);
        int vlen;
        vlen= strlen(v);
        if(vlen>1)
        {
            printf("Entered digits are more than one, data recovery not possible\n\n");
            ans=1;
            break;
        }
        else
        {
            if(isdigit(v[0]))
            {
                data[pos[i]]=v[0];
            }
            else
            {
                printf("Data recovery not possible\n\n");
                ans=1;
                break;
            }
        }
    }
    if(!ans)
    printf("data entered is %s which is valid\n\n",data);
    }

    return;
} //   printf("Valid data is entered");
