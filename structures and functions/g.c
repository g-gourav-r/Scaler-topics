#include<stdio.h>

 struct number{
   int a;
   int b;
   int c;
 };
 
 void total(struct number* p){
   p->c =p->a + p->b ;
 }

 int main(){
   struct number one;
   printf("Enter the first number : ");
   scanf("%d",&one.a);
   printf("\nEnter the second number : ");
   scanf("%d",&one.b);
   total(&one);
   printf("\nThe result is %d",one.c);
   return 0;
 }




 