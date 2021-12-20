//Passing individual members to a function.
#include<stdio.h>
void main(){
   struct student{
     int rno;
     int m1,m2,m3;
    }s1;
  
   printf("Enter the name of the roll numbrt of the student\n");
   scanf("%d",s1.rno);
   printf("Enter the marks scored in all 3 subjects\n");
    scanf("%d %d %d",&s1.m1,&s1.m2,&s1.m3);
   avg(s1.m1,s1.m2,s1.m3);
    }
    
void avg(int a,int b,int c){
    int average;
    average=(a+b+c)/3;
    printf("The average of three subject is %d",average);
}