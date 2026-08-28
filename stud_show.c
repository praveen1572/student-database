#include"header.h"
void display(void){
    stu *ptr = head;
    if(ptr == 0){
        printf("No records found\n");
        return;
    }
    printf("%-10s %-10s %-10s\n","Roll No.","Name","Percentage");
    while(ptr){
        printf("%-10d %-10s %-10.2f\n",ptr->roll,ptr->name,ptr->percentage);
        ptr = ptr->next;
    }
}
