#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(num> 0){
        printf("%d is positive number", num);
    }else if(num == 0){
        printf("%d is zero number", num);
    }else{
        ("%d is negative number", num);
    }
}
