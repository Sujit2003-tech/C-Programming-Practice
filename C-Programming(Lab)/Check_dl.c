#include<stdio.h>
int main(){
int age;
char addhar;
printf("Do you have Adharcard(y/n):");
scanf("%c",&addhar);

if(addhar=='y'|| addhar=='Y'){
    printf("Enter your age:");
    scanf("%d",&age);

    if(age >=18){
    printf("Your DL is generated successfully \n");
}   else{
    printf("Only 18 or above 18 age can apply for DL \n");
}
}
else{
    printf("Adharcard is mendtory for DL");
}
    return 0;
}