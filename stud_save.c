#include <stdio.h>
#include "student.h"

void stud_save(ST *ptr)
{
    FILE *fp;

    fp = fopen("student.csv", "w");

    if(fp == NULL)
    {
        printf("File Open Error\n");
        return;
    }

    fprintf(fp, "Roll No,Name,Percentage\n");

    while(ptr)
    {
        fprintf(fp, "%d,%s,%.2f\n",
                ptr->rollno,
                ptr->name,
                ptr->percentage);

        ptr = ptr->next;
    }

    fclose(fp);

    printf("\nRecords Saved Successfully!\n");
}

