#include <stdio.h>
int main(){
    int x = 0, y = 0, result =0;

    printf("enter first number : ");
    scanf("%d", &x);

    printf("enter second number : ");
    scanf("%d", &y);

    result = x+y;
    printf("sum of 2 number: %d \n", result);
    printf("The value of %d + %d = %d ", x,y, result);

}
