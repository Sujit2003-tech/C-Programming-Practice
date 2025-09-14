#include<stdio.h>
//largest number of 3 numbers
int a=10,b=20,c=5;
int main(){
if(a>b && a>c ){
    printf("A is greater \n");
}else if(b>a && b>c){
    printf("B is greater\n");
}else{
    printf("C is grester\n");
}

    return 0;
}