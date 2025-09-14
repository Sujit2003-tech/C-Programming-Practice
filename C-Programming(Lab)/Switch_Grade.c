#include<stdio.h>
int main(){
// Grade students according their marks
/*
>= 90  A
80-89  B
70-79  C
60-69  D
50-59  E
<50    F 
*/

int marks;
printf("Enter your mark:");
scanf("%d",&marks);

switch (marks /10){     // Take 100 marks Overall and divide in to 100 so 90 is 9% so on..
 case 9 :
    printf("A Grade \n");
    break;
 case 8 :
    printf("B Grade \n");
    break;
 case 7 :
    printf("C Grade \n");
    break;
 case 6 :
    printf("D Grade \n");
    break;
 case 5 :
    printf("E Grade \n");
    break;
 case 4 :
    printf("F Grade \n");
    break;
default:
    printf("Invalid marks");
}
    return 0;

}