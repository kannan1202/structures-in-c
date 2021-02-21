#include <stdio.h>
struct employees
{
    char empname[30];
    int empno;
    int empsalary;
    char empdept[20];
};

int main()
{   int i;
    struct employees emp[20];
    for(i=0; i<20; i++){
 
        printf("Employee %d: \n",i+1);
        printf("Name: \n ");
        scanf("%s",emp[i].empname);
        printf("number: \n ");
        scanf("%d",&emp[i].empno);
        printf("Salary: \n");
        scanf("%d",&emp[i].empsalary);
        printf("department: \n");
        scanf("%s",emp[i].empdept);
 
        printf("\n");
    }
    
     printf("employees details are as follows: \n");
     for(i=0; i<20; i++){
 
        printf("Employee %d: \n",i+1);
        printf("Employee name : %s  ",emp[i].empname);
        printf("Employee number: %d  ",emp[i].empno);
        printf("Employee salary: %d  ",emp[i].empsalary);
        printf("Employee department: %s  ",emp[i].empdept);
 
        printf("\n");
    }
    return 0;
}
