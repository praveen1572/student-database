#include "header.h"
void stud_modify(void){
    int roll,count;
    char name[50],opt;
    float percentage;
    printf("R/r:Search by roll number\nN/n:Search by name\nP/p:Search by percentage\n");
    scanf(" %c",&opt);
    switch(opt){
        case 'R':
        case 'r':printf("Enter Roll No:");
               scanf("%d",&roll);

               if(search_roll(roll))
                   modify_roll(roll);
               else
                   printf("Roll No %d does not exist\n",roll);
               break;
        case 'N':
        case 'n':printf("Enter Name:");
               scanf("%s",name);
               count = search_name(name);
               if(count==1){
                   modify_name(name);
               }
               else if(count==0){
                   printf("Student Name \"%s\" NOT FOUND",name);
               }
               else{
                   printf("%d matches found\n",count);
                   stu *ptr=head;
                   while(ptr){
                       if(!strcmp(name,ptr->name))
                           printf("%d %s %f\n",ptr->roll,ptr->name,ptr->percentage);
                       ptr=ptr->next;
                   }
                   printf("Enter ROLL NO from above to be modified:");
                   scanf("%d",&roll);
                   modify_roll(roll);
               }
               break;
        case 'P':
        case 'p':
               printf("Enter Percentage:");
               scanf("%f",&percentage);
               count=search_percentage(percentage);
               if(count==1){
                   modify_percentage(percentage);
               }
               else if(count==0){
                   printf("Student with Percentage \"%f\" NOT FOUND",percentage);
               }
               else{
                   printf("%d matches found\n",count);
                   stu *ptr=head;
                   while(ptr){
                       if(ptr->percentage==percentage)
                           printf("%d %s %f\n",ptr->roll,ptr->name,ptr->percentage);
                       ptr=ptr->next;
                   }
                   printf("Enter ROLL NO from above to be modified:");
                   scanf("%d",&roll);
                   modify_roll(roll);
               }
               search_percentage(percentage);
               break;
        default:
               printf("Enter valid option\n");
    }
}

int search_roll(int roll){
    stu *ptr=head;
    while(ptr){
        if(ptr->roll==roll)
            break;
        ptr=ptr->next;
    }
    if(ptr==0)
        return 0;
    return 1;
}

void modify_roll(int roll){
    stu *ptr=head;
    while(ptr){
        if(ptr->roll==roll)
            break;
        ptr=ptr->next;
    }
    printf("Roll No=%d Name=%s Percentage=%f\n",
            ptr->roll,ptr->name,ptr->percentage);
    printf("Enter Updated Details\n");
    printf("Enter Name:");
    scanf("%s",ptr->name);
    printf("Enter Percentage:");
    scanf("%f",&ptr->percentage);
    printf("Updated details\n");
    printf("Roll No=%d Name=%s Percentage=%f\n",ptr->roll,ptr->name,ptr->percentage);
}

int search_name(char *name){
    stu *ptr=head;
    int c=0;
    while(ptr){
        if(!strcmp(name,ptr->name))
            c++;
        ptr=ptr->next;
    }
    return c;
}

void modify_name(char *name){
    stu *ptr=head;
    while(ptr){
        if(!strcmp(name,ptr->name))
            break;
        ptr=ptr->next;
    }
    printf("Roll No=%d Name=%s Percentage=%f\n",ptr->roll,ptr->name,ptr->percentage);
    printf("Enter Updated Details\n");
    printf("Enter Name:");
    scanf("%s",ptr->name);
    /*
       printf("Enter Percentage:");
       scanf("%f",&ptr->percentage);
     */
    printf("Updated details\n");
    printf("Roll No=%d Name=%s Percentage=%f\n",ptr->roll,ptr->name,ptr->percentage);
}

int search_percentage(float percentage){
    stu *ptr=head;
    int c=0;
    while(ptr){
        if(ptr->percentage==percentage)
            c++;
        ptr=ptr->next;
    }
    return c;
}

void modify_percentage(float percentage){
    stu *ptr=head;
    while(ptr){
        if(ptr->percentage==percentage)
            break;
        ptr=ptr->next;
    }
    printf("Roll No=%d Name=%s Percentage=%f\n",ptr->roll,ptr->name,ptr->percentage);
    printf("Enter Updated Details\n");
    /*
       printf("Enter Name:");
       scanf("%s",ptr->name);
     */
    printf("Enter Percentage:");
    scanf("%f",&ptr->percentage);
    printf("Updated details\n");
    printf("Roll No=%d Name=%s Percentage=%f\n",ptr->roll,ptr->name,ptr->percentage);
}
