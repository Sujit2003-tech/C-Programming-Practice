#include<stdio.h>
int main(){
//Celsius to Fahrenheit
float  celsius,Fahrenheit;
printf("Enter your temperature in celsius: ");
scanf("%f",&celsius);
Fahrenheit= celsius*9/5+32;
printf("%.2f's Fahrenheit value is %.2f",celsius,Fahrenheit);
    return 0;
}
