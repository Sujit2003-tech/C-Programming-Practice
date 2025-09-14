#include<stdio.h>
int main(){
int a=555 , b=7;
a = b+a; //a= 70
b = a-b; //b= 23
a = a-b; //a= 47
printf("a's value is %d b's value is %d",a,b);
return 0;
}