#include<stdio.h>
//demonstrate the use of constants
int main(){
// Calculate area of the circle
const float pi = 3.14;
float redius,area;
printf("Enter the redius:");
scanf("%f",&redius);
area = pi*redius*redius;
printf("area of the circle is: %.2f",area);
 return 0;

}