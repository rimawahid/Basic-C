#include <stdio.h>
int main(){
    int num , flag;
    printf("Enter a number: ");
    scanf("%d", &num);

    //checkPrime
    flag = checkPrime(num);
    if(flag == 1){
        printf("%d is a prime number.\n ", num);
    }else{
        printf("%d is not a prime number.\n ", num);
    }

    //checkArmstrong
    flag = checkArmstrong(num);
    if(flag == num){
        printf("%d is an Armstrong number. ", num);
    }else{
        printf("%d is not an Armstrong number. ", num);
    }

}

int checkPrime(int n){
    int i, flag=1;

    for(i=2; i<= n-2; i++){
        if(n%i== 0){
            flag= 0;
            break;
        }
    }
    return flag;
}

int checkArmstrong(int n){
    int originalNum, remainder, result = 0;
    originalNum= n;

    while(originalNum!=0){
        remainder = originalNum%10;
        result += remainder*remainder*remainder;
        originalNum /= 10;
    }
    return result;
}
