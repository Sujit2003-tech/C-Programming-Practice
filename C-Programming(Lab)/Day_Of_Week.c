#include<stdio.h>
int main(){
int days;
printf("Enter days of week(1-7): ");
scanf("%d",&days);
switch(days){
    case 1 : 
        printf("Monday \n");
        break;
    case 2 :
        printf("Tuesday \n");
        break;
    case 3 :
        printf("Wednesday \n");
        break;
    case 4 :
        printf("Thursday \n");
        break;
    case 5 :
        printf("Friday \n");
        break;
    case 6 :
        printf("Satarday\n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default :
     printf("Invalid Entry");
    
}
    return 0;
}