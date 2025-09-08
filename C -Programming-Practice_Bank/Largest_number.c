#include<stdio.h>
int main(){
//Find the largest number
 int a=100 ,b=5,c=45;
if((a>= b)&& (a>=c)){
    printf("a is greatest\n");
}   
else if ((b>=a)&&(b>=c)){
    printf("b is greatest \n");
}
else{
    printf("c is grestest");
}
    return 0;

}