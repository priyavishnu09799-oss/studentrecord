#include <stdio.h>
#include <string.h>
#include "student.h"

void stud_mod(ST *ptr)
{
    ST *temp;
    int num;
    float percentage;
    char ch;
    char name[20];
    int found;

    printf("\nR/r : Search by Roll Number");
    printf("\nN/n : Search by Name");
    printf("\nP/p : Search by Percentage");
    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':

            printf("\nEnter Roll Number : ");
            scanf("%d", &num);

            temp = ptr;

            while(temp)
            {
                if(temp->rollno == num)
                    break;

                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("\nRecord Not Found\n");
                return;
            }

            printf("\nRoll = %d\tName = %s\tPercentage = %.2f\n",
                   temp->rollno,
                   temp->name,
                   temp->percentage);

            break;


        case 'N':
        case 'n':

            printf("\nEnter Name : ");
            scanf("%s", name);

            temp = ptr;
            found = 0;

            while(temp)
            {
                if(strcmp(temp->name, name) == 0)
                {
                    printf("\nRoll = %d\tName = %s\tPercentage = %.2f",
                           temp->rollno,
                           temp->name,
                           temp->percentage);

                    found = 1;
                }

                temp = temp->next;
            }

            if(found == 0)
            {
                printf("\nRecord Not Found\n");
                return;
            }

            printf("\nEnter Roll Number to Modify : ");
            scanf("%d", &num);

            temp = ptr;

            while(temp)
            {
                if(temp->rollno == num)
                    break;

                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("\nRecord Not Found\n");
                return;
            }

            break;


        case 'P':
        case 'p':

            printf("\nEnter Percentage : ");
            scanf("%f", & percentage);

            temp = ptr;
            found = 0;

            while(temp)
            {
                if(temp->percentage == percentage)
                {
                    printf("\nRoll = %d\tName = %s\tPercentage = %.2f",
                           temp->rollno,
                           temp->name,
                           temp->percentage);

                    found = 1;
                }

                temp = temp->next;
            }

            if(found == 0)
            {
                printf("\nRecord Not Found\n");
                return;
            }

            printf("\nEnter Roll Number to Modify : ");
            scanf("%d", &num);

            temp = ptr;

            while(temp)
            {
                if(temp->rollno == num)
                    break;

                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("\nRecord Not Found\n");
                return;
            }

            break;


        default:

            printf("\nInvalid Choice\n");
            return;
    }


    printf("\nN/n : Modify Name");
    printf("\nP/p : Modify Percentage");
    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'N':
        case 'n':

            printf("\nEnter New Name : ");
            scanf("%s", temp->name);

            printf("\nName Modified Successfully!\n");

            break;


        case 'P':
        case 'p':

            printf("\nEnter New Percentage : ");
            scanf("%f", &temp->percentage);

            printf("\nPercentage Modified Successfully!\n");

            break;


        default:

            printf("\nInvalid Choice\n");
    }
}
