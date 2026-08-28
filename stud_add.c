#include "header.h"
stu *head=0;
void stud_add(void){
    stu *new=malloc(sizeof(stu));
    printf("Enter student details:\n Name:");
    scanf("%s",new->name);
    printf("Percentage:");
    scanf("%f",&new->percentage);
    new->next=0;
    if(head==0){
        head=new;
        new->roll=1;
        new->next=0;
    }
    else{
        stu *ptr=head;
        int i,flag=1;
        for(i=1;flag;i++){
            ptr=head;
            while(ptr){
                if((ptr->roll!=i)&&(ptr->next==0))
                    flag=0;
                else if(ptr->roll==i)
                    break;
                ptr=ptr->next;
            }
        }
        ptr=head;
        while(ptr->next){
            ptr=ptr->next;
        }
        new->roll=i-1;
        ptr->next=new;
    }
}
/*
   else{
   while(ptr){
   if(ptr->roll!=r)
   break;
   r++;
   prev=ptr;
   ptr=ptr->next;
   }
   if(ptr==0){
   prev->next=new;
   new->next=0;
   }
   else if(r==1){
   new->next=head;
   head=new;
   }
   else{
   stu *temp=prev->next;
   prev->next=new;
   new->next=temp;
   }
   }
 */
