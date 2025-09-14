#include<stdio.h>
int main(){
int a= 20 , b=30;
char ops;
printf("Enter any operation:");
scanf("%c",&ops);

switch(ops){
    case '+' : 
    printf("Sum of two numbers %d",a+b);
    break;
    case '-' :
    printf("Substraction of two numbers %d",a-b);
    break;
    case '*' :
    printf("Multiplication of two numbers %d",a*b);
    break;
    case '/' :
    printf("Division of two numbers %d",a/b);
    break;
    default :
    printf("Invaild Entry!");
}    
    return 0;

}