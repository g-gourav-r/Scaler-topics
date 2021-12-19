#include <stdio.h>
//Structure declartion
struct employee {
    char name[40];
    int empid;
    int experience;
}emp;
void displaydetails(struct employee*);  //function declaration
int main()
{
struct employee *empptr;   //pointer declaration
empptr = &emp;   //initial
printf("\nEnter the name of the Employee : ");
scanf("%s", empptr->name);
printf("\nEnter the Employee Id : ");
scanf("%d",&empptr->empid);
printf("\nEnter Experience of the Employee : ");
scanf("%d",&empptr->experience);
displaydetails(empptr);
return 0;
}
//Function Definition
void displaydetails(struct employee *empptr)
{
printf("\n---------Details List--------- \n ");
printf("Employee Name : %s",empptr->name);
printf("\nEmployee ID : %d ",empptr->empid);
printf("\nEmployee Experience : %d ",empptr->experience);
}