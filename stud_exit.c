#include"header.h"
void stud_exit(void){
    char opt;
   printf("S/s:Save and exit\nE/e:Exit without saving\n");
    scanf(" %c",&opt);
    switch(opt){
        case 'S':
        case 's':save_stud();
               return;
        case 'E':
        case 'e': return;
        default:printf("Enter valid option\n");
    }
}
void save_stud(void){
    stu *ptr=head;
    FILE *fp;
    fp=fopen("student.data","w");
    while(ptr){
        fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    fclose(fp);
}
