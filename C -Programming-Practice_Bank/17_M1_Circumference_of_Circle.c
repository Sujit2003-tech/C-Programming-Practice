#include<stdio.h>
// Develop a program to calculate the area and circumference of a circle.
int main(){
    float redius,circumference,area;
    const float pi= 3.14;
printf("Enter circle's redius:");
scanf("%f",&redius);

circumference = 2*pi*redius;
area = pi*redius*redius;
printf("area =%.2f \n",area);
printf("circumference =%.2f \n",circumference);
return 0;
}