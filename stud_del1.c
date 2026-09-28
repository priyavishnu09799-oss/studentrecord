#include "student.h"
#include<string.h>

void stud_del1(ST **ptr)
{
    ST *temp, *prv;
    int num;
    char ch, name[20];
    int found;

    printf("\nR : Delete by Roll Number");
    printf("\nN : Delete by Name");
    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':

            if(*ptr == NULL)
            {
                printf("List is Empty\n");
                return;
            }

            printf("Enter Roll Number : ");
            scanf("%d", &num);

            temp = *ptr;
            prv = NULL;

            while(temp)
            {
                if(temp->rollno == num)
                    break;

                prv = temp;
                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("Record Not Found\n");
                return;
            }

            printf("\nRecord to be Deleted:\n");

            printf("Roll = %d\tName = %s\tPercentage = %.2f\n",
                   temp->rollno,
                   temp->name,
                   temp->percentage);

            if(temp == *ptr)
                *ptr = temp->next;
            else
                prv->next = temp->next;

            free(temp);

            printf("\nRecord Deleted Successfully!\n");

            break;


        case 'N':
        case 'n':

            if(*ptr == NULL)
            {
                printf("List is Empty\n");
                return;
            }

            printf("Enter Name : ");
            scanf("%s", name);

            temp = *ptr;
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

            printf("\nEnter Roll Number to Delete : ");
            scanf("%d", &num);

            temp = *ptr;
            prv = NULL;

            while(temp)
            {
                if(temp->rollno == num)
                    break;

                prv = temp;
                temp = temp->next;
            }

            if(temp == NULL)
            {
                printf("Record Not Found\n");
                return;
            }

            printf("\nRecord to be Deleted:\n");

            printf("Roll = %d\tName = %s\tPercentage = %.2f\n",
                   temp->rollno,
                   temp->name,
                   temp->percentage);

            if(temp == *ptr)
                *ptr = temp->next;
            else
                prv->next = temp->next;

            free(temp);

            printf("\nRecord Deleted Successfully!\n");

            break;


        default:

            printf("\nInvalid Choice\n");
    }
  }
