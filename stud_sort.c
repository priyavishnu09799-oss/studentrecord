#include <stdio.h>
#include <string.h>
#include "student.h"

void stud_sort(ST *ptr)
{
    ST *p1, *p2;
    int temp_rollno;
    char temp_name[20];
    float temp_percentage;
    char ch;

    printf("\nN/n : Sort by Name");
    printf("\nP/p : Sort by Percentage");
    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'N':
        case 'n':

            for(p1 = ptr; p1 != NULL; p1 = p1->next)
            {
                for(p2 = p1->next; p2 != NULL; p2 = p2->next)
                {
                    if(strcmp(p1->name, p2->name) > 0)
                    {
                        temp_rollno = p1->rollno;
                        p1->rollno = p2->rollno;
                        p2->rollno = temp_rollno;

                        strcpy(temp_name, p1->name);
                        strcpy(p1->name, p2->name);
                        strcpy(p2->name, temp_name);

                        temp_percentage = p1->percentage;
                        p1->percentage = p2->percentage;
                        p2->percentage = temp_percentage;
                    }
                }
            }

            printf("\nRecords Sorted by Name Successfully!\n");
            break;


        case 'P':
        case 'p':

            for(p1 = ptr; p1 != NULL; p1 = p1->next)
            {
                for(p2 = p1->next; p2 != NULL; p2 = p2->next)
                {
                    if(p1->percentage < p2->percentage)
                    {
                        temp_rollno = p1->rollno;
                        p1->rollno = p2->rollno;
                        p2->rollno = temp_rollno;

                        strcpy(temp_name, p1->name);
                        strcpy(p1->name, p2->name);
                        strcpy(p2->name, temp_name);

                        temp_percentage = p1->percentage;
                        p1->percentage = p2->percentage;
                        p2->percentage = temp_percentage;
                    }
                }
            }

            printf("\nRecords Sorted by Percentage Successfully!\n");
            break;


        default:

            printf("\nInvalid Choice\n");
    }
}
