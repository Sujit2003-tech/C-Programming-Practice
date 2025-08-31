#include<stdio.h>
int main(){
// Find the area of rectangle
float base,height,area;
printf("Enter rectangle's base and height:");
scanf("%f %f",&base,&height);
area=base*height;
printf("area of rectangle is :%.2f",area);
return 0;
}