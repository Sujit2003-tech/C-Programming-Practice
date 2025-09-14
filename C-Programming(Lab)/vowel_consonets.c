#include<stdio.h>
int main(){
char alfabate;
printf("Enter any alfabate: ");
scanf("%c",&alfabate);
if((alfabate =='a'||alfabate =='e' ||alfabate =='i'||alfabate =='o'||alfabate =='u')||(alfabate =='A'||alfabate =='E' ||alfabate =='I'||alfabate =='O'||alfabate =='U')){
    printf("%c is an vowel \n",alfabate);
}else{
    printf("%c is a consonent",alfabate);
}
    return 0;

}