#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
    int roll;
    char name[50];
    float percentage;
    struct student *next;
}stu;
extern stu *head;
void stud_add(void);
void stud_del(void);
void del_num(int roll);
void del_name(char *name);
void display(void);
void stud_modify(void);
int search_roll(int roll);
void modify_roll(int roll);
int search_name(char *name);
void modify_name(char *name);
int search_percentage(float percentage);
void modify_percentage(float percentage);
void save_stud(void);
void load_stud(void);
void stud_exit(void);
void sort_stud(void);
void sort_roll(void);
void sort_name(void);
void sort_percentage(void);
void delete_all(void);
void reverse_stud(void);

#endif
