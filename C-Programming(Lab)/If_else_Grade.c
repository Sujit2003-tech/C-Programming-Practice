#include<stdio.h>
int main(){
int marks;
printf("Enter your mark:");
scanf("%d",&marks);
if(marks >=90 && marks <=100){
    printf("A grade \n");
}else if (marks >=80 && marks <=89)
{
    printf("B Grade \n");
}else if (marks >=70 && marks <=79){
    printf("C Grade \n");
}else if (marks >=60 && marks <=69){
    printf("D Grade \n");

}else if (marks >=50 && marks <=59){
    printf("E Grade \n");
}else if (marks >=0 && marks <=50){
    printf("F Grade \n");
}else
printf("Invaild Entry");




    return 0;
}