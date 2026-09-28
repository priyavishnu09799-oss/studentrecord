#include <stdio.h>
#include "student.h"

void stud_show(ST *ptr)
{
    if(ptr == NULL)
    {
        printf("\nList is Empty\n");
        return;
    }

    printf("\n---------------------------------------------\n");
    printf("Roll No\t\tName\t\tPercentage\n");
    printf("---------------------------------------------\n");

    while(ptr)
    {
        printf("%d\t\t%s\t\t%.2f\n",
               ptr->rollno,
               ptr->name,
               ptr->percentage);

        ptr = ptr->next;
    }

    printf("---------------------------------------------\n");
}
