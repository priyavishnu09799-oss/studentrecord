#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int rollno;
	char name[20];
	float percentage;
	struct student*next;
}ST;
void stud_add(ST**);
void stud_del1(ST**);
void stud_show(ST*);
void stud_mod(ST*);
void stud_save(ST*);
void stud_sort(ST*);
void stud_load(ST**);

