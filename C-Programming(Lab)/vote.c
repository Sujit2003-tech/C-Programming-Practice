#include<stdio.h>
int main(){
    int age;
    char citizen;
printf("Are you citizen of india(y/n)");
scanf("%c",&citizen);

if((citizen =='Y')||(citizen =='y')){
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("You are eligible for voting \n");
    }else{
        printf("You are not eligible for voting \n");
    }

}else{
    printf("You must be an Indian & age is above 18.");
}

}