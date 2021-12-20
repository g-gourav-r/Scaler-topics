//Core dump.

#include <stdio.h>
int add(int, int) ;  
int main()
{

struct addition{
    int a, b;
    int c; 
}sum;
printf("Enter the value of a : ");
scanf("%d",&sum.a);
printf("\nEnter the value of b : ");
scanf("%d",&sum.b);
sum.c = add(sum. a, sum.b);     //passing structure members as arguments to function
printf("\nThe sum of two value are : ");
printf("%d ", sum.c);
return 0;
}
//Function definition
int add(int x, int y)
{
int sum1;
sum1 = x + y;
return(sum1);
}