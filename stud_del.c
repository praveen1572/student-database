#include "header.h"
void stud_del(void){
    int roll;
    char opt,name[50];
    printf("R/r:Enter roll number to delete\nN/n:Enter name to delete\n");
    scanf(" %c",&opt);
    switch(opt){
        case 'R':
        case 'r':printf("Enter Roll No:");
               scanf("%d",&roll);
               del_num(roll);
               break;
        case 'N':
        case 'n':printf("Enter Name:");
               scanf("%s",name);
               del_name(name);
               break;
        default:
               printf("Enter valid option\n");
    }
}

void del_num(int roll){
    stu *ptr=head,*prev=head;
    if(ptr==0){
        printf("No records found");
        return;
    }
    if(ptr->roll==roll){
        printf("Roll No \"%d\" record deleted\n",roll);
        head=ptr->next;
        free(ptr);
        return;
    }
    while(ptr){
        if(ptr->roll==roll)
            break;
        prev=ptr;
        ptr=ptr->next;
    }
    if(ptr==0){
        printf("Roll No \"%d\" does not exist",roll);
        return;
    }
    prev->next=ptr->next;
    free(ptr);
    printf("Roll No \"%d\" record deleted\n",roll);
    return;
}

void del_name(char *name){
    stu *ptr=head,*prev=head;
    if(ptr==0){
        printf("No records found");
        return;
    }
    if(!strcmp(name,ptr->name)){
        printf("Name \"%s\" record deleted\n",name);
        head=ptr->next;
        free(ptr);
        return;
    }
    while(ptr){
        if(!strcmp(name,ptr->name))
            break;
        prev=ptr;
        ptr=ptr->next;
    }
    if(ptr==0){
        printf("Name \"%s\" does not exist",name);
        return;
    }
    prev->next=ptr->next;
    free(ptr);
    printf("Name \"%s\" record deleted\n",name);
}
