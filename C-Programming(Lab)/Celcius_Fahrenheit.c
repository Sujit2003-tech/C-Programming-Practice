#include<stdio.h>
int main(){
float celcius;
float farhrenheit; 

printf("Enter your tempreture(celcius): ");
scanf("%f",&celcius);
farhrenheit = celcius*9/5+32;
printf("%.2f in farhrenheit is: %.2f ",celcius,farhrenheit);
return 0;

}