#include<stdio.h>
int main(){
//Find the largest number
 int a=10 ,b=5,c=26;
if((a>= b)&& (a>=c)){
    printf("a is greatest\n");
}   
else if ((b>=c)&&(c>=b)){
    printf("b is greatest \n");
}
else{
    printf("c is grestest");
}
    return 0;

}