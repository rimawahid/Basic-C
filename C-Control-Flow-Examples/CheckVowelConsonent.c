#include <stdio.h>
int main(){
    char a;
    int lowercase_vowel, uppercase_vowel;
    printf("enter an alphabet :");
    scanf("%c", &a);

    lowercase_vowel= (a == 'a' || a == 'e' || a== 'i' || a== 'o' || a== 'u');

    uppercase_vowel= (a == 'A' || a == 'E' || a== 'I' || a== 'O' || a== 'U');

    if(lowercase_vowel || uppercase_vowel){
        printf("%c is a vowel ", a);
    }else{
        printf("%c is a consonant ", a);
    }
    return 0;
}
