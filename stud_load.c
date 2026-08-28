#include "header.h"
void load_stud(void){
    stu *ptr,*prev;
    FILE *fp;
    fp=fopen("student.data","r");
    if(fp==NULL){
        printf("No Stored Data Found\nStarting with an empty list\n");
        return;
    }
    ptr=malloc(sizeof(stu));
    head=ptr;
    while(fscanf(fp,"%d%s%f",&ptr->roll,ptr->name,&ptr->percentage)==3){
        ptr->next=malloc(sizeof(stu));
        prev=ptr;
        ptr=ptr->next;
    }
    if(ptr==head){
        free(ptr);
        head=0;
    }
    else{
        prev->next=0;
        free(ptr);
    }
    fclose(fp);
}
