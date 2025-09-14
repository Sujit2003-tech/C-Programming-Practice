#include<stdio.h>
int main(){
// Take a character as input and check if it is an alphabet, a digit, or a special character.
char ch;
printf("Enter any character:");
scanf("%c",&ch);

if(ch >='a'&& ch <='z' || ch >= 'A' && ch <='Z'){
    printf("It is an alfabate \n");
}else if(ch >='0' && ch <='9'){
    printf("It is a Digit  \n");
}else{
    printf("It is a special character \n");
}

return 0;
}

