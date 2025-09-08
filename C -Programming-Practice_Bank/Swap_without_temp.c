#include<stdio.h>
int main(){
//swap two numbers without using a temporary variable.
int a ,b ;
a = 15,b =100;
a = a+b;
b = a-b;
a = a-b;
printf("a's value is %d , \t b's value is %d",a,b);
}