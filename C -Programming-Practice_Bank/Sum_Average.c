#include<stdio.h>
int main(){
//Sum and average of three numbers
int a,b,c,sum;
float avg;
printf("Enter three numbers: ");
scanf("%d %d %d",&a,&b,&c);
sum = a+b+c;
avg = sum/3.0;
printf("Sum of three numbers is %d and average of those numbers is %.2f",sum,avg);
  
    return 0;

}