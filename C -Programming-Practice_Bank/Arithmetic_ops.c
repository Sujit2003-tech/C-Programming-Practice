#include<stdio.h>
//Program for all arithmetic operations
int a,b,add,sub,multi,div;
int main(){
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
// add = a + b;
// sub = a - b;
// multi = a*b;

printf("Sum of two numbers is: %d\n",a+b);
printf("Substraction of two numbers is: %d\n",a-b);
printf("Multiplication of two numbers is: %d\n",a*b);
printf("Division of two numbers is: %d",a/b);


return 0;
}
