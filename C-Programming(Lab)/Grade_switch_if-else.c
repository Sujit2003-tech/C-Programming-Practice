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
int mark;
printf("Enter your mark: ");
scanf("%d",&mark);

switch(mark/10){
case 1:
if (mark >=90 && mark <=100){
    printf("A Grade \n");
}
 break;

case 2:
if (mark >=80 && mark <=89){
    printf("B Grade \n");
}
 break;




}
}