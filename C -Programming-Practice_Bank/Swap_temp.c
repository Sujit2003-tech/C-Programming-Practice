#include<stdio.h>
int main(){
// swap two numbers using a temporary variable.
int a = 70 , b = 10 ,temp;
temp = a ; //temp = 30 
a = b; // a = 40 
b = temp; //b = 30 

printf("a's value is %d\n",a);
printf("b's value is %d",b);


return 0;

}