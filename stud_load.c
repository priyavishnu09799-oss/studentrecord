#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void stud_load(ST **ptr)
{
    FILE *fp;
    ST *new, *temp;

    fp = fopen("student.csv", "rb");

    if(fp == NULL)
    {
        return;
    }

    while(1)
    {
        new = malloc(sizeof(ST));

        if(new == NULL)
        {
            printf("Memory Allocation Failed\n");
            fclose(fp);
            return;
        }

        if(fread(new, sizeof(ST), 1, fp) != 1)
        {
            free(new);
            break;
        }

        new->next = NULL;

        if(*ptr == NULL)
        {
            *ptr = new;
        }
        else
        {
            temp = *ptr;

            while(temp->next)
                temp = temp->next;

            temp->next = new;
        }
    }

    fclose(fp);
}
