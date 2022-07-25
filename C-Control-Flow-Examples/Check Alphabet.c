#include <stdio.h>
int main(){
    char a;
    printf("Enter an alphabet:");
    scanf("%c", &a);

    if((a>= 'a' && a<='z') || (a>='A' && a<= 'Z')){
        printf("%c is an alphabet ", a);
    }else{
        printf("%c is not an alphabet");
    }
    return 0;
}
