#include<stdio.h>
int main(){
    // Program to convert kilometers to miles.
float miles, kilometers;
printf("Enter kilometer:");
scanf("%f",&kilometers);

miles = kilometers/1.6;
printf("%.2f kilometer = %.2f miles",kilometers,miles);
}