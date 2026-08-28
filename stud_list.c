#include"header.h"
void delete_all(void){
    stu *ptr=head,*temp;
    while(ptr){
        temp=ptr;
        ptr=ptr->next;
        free(temp);
    }
    head=0;
}
void reverse_stud(void){
    stu *ptr=head,*next,*prev=head;
    if(ptr==0){
        printf("No records to reverse\n");
        return;
    }
    if(ptr->next==0)
        return;
    next=ptr->next;
    ptr->next=0;
    prev=ptr;
    ptr=next;
    while(ptr->next){
        next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=next;
    }
    ptr->next=prev;
    head=ptr;
}
void sort_stud(void){
    char opt;
    printf("R/r:Sort with roll no.\nN/n:Sort with name\nP/p:Sort with percentage\n");
    scanf(" %c",&opt);
    switch(opt){
        case 'R':
        case 'r':sort_roll();
                 break;
        case 'N':
        case 'n':sort_name();
                 break;
        case 'P':
        case 'p':sort_percentage();
                 break;
        default:printf("Enter valid option");
    }
    display();
}
void swap_roll(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    }
void swap_name(char *a,char *b){
    char t[50];
    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);
    }
void swap_percentage(float *a,float *b){
    float t;
    t=*a;
    *a=*b;
    *b=t;
    }
void sort_roll(void){
    stu *slow=head,*fast;
    while(slow){
        fast=slow->next;
        while(fast){
            if(slow->roll>fast->roll){
                swap_roll(&slow->roll,&fast->roll);       
                swap_name(slow->name,fast->name);       
                swap_percentage(&slow->percentage,&fast->percentage);       
                }
                fast=fast->next;
        }
        slow=slow->next;
    }
}
void sort_name(void){
    stu *slow=head,*fast;
    while(slow){
        fast=slow->next;
        while(fast){
            if(strcmp(slow->name,fast->name)>0){
                swap_roll(&slow->roll,&fast->roll);       
                swap_name(slow->name,fast->name);       
                swap_percentage(&slow->percentage,&fast->percentage);       
                }
                fast=fast->next;
        }
        slow=slow->next;
    }
}
void sort_percentage(void){
    stu *slow=head,*fast;
    while(slow){
        fast=slow->next;
        while(fast){
            if(slow->percentage>fast->percentage){
                swap_roll(&slow->roll,&fast->roll);       
                swap_name(slow->name,fast->name);       
                swap_percentage(&slow->percentage,&fast->percentage);       
                }
                fast=fast->next;
        }
        slow=slow->next;
    }
}
