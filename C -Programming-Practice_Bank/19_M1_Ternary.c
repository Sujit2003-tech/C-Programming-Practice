#include<stdio.h>
int main(){
// Implement a program to demonstrate the use of the ternary operator.
int a,b,result; //Findout who is greatest
printf("Enter a&b value:" );
scanf("%d %d",&a,&b);
result=((a>=b)?printf("a is greatest \n"):printf("b is greatest \n"));
    return 0;
}