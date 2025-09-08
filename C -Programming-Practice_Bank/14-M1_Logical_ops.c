#include<stdio.h>
int main(){
int num;
char ch ;
printf("Enter a character:");
scanf("%c",&ch);

if(ch >='A' && ch <='Z'){
    printf("%c is an Uppercase \n",ch);
}else{
    printf("%c is not an Lower case \n",ch);
}

// ((ch >= 65 && ch <= 90)) 
return 0;
}