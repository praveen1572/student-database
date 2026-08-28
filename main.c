#include "header.h"
int main(void){
    char choice;
    int flag=1;
    load_stud();
    while(flag){
        printf("\n========STUDENT RECORD MENU=======\n");
        printf("a/A:Add new record\n");
        printf("d/D:Delete a record\n");
        printf("s/S:Show the list\n");
        printf("m/M:Modify a record\n");
        printf("v/V:Save records\n");
        printf("t/T:Sort the list\n");
        printf("l/L:Delete all the records\n");
        printf("r/R:Reverse the list\n");
        printf("Enter your choice: ");
        printf("e/E:Exit\n");
        scanf(" %c", &choice);
        switch(choice){
            case 'a':
            case 'A':stud_add();
                     break;
            case 'd':
            case 'D':stud_del();
                     break;
            case 's':
            case 'S':display();
                     break;
            case 'm':
            case 'M':stud_modify();
                     break;
            case 'v':
            case 'V':save_stud();
                     break;
            case 't':
            case 'T':sort_stud();
                     break;
            case 'l':
            case 'L':delete_all();
                     break;
            case 'r':
            case 'R':reverse_stud();
                     break;
            case 'e':
            case 'E':stud_exit();
                     flag=0;
                     break;
            default:printf("Enter valid option\n");
        }
    }
}
