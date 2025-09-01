#include<stdio.h>
int main(){
int age,marks;
char name[10];
    printf("Enter your name:");
    scanf("%s",&name);

    printf("Enter your age & marks: \n");
    scanf("%d %d",&age,&marks);

    printf("%s's age is %d & secure marks is %d",name,age,marks);
    return 0;
}