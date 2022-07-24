#include <stdio.h>
int main(){
    int num;
    printf("enter your number :");
    scanf("%d", &num);
    if(num%2== 0){
        printf("%d is even", num);
    }else{
        printf("%d is odd", num);
    }


    //Using the Ternary Operator

    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}
