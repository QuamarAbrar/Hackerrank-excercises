// Sum Last Digits
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b){
    int res = a%10 + b%10;
    return res;
}
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int r = sumLastDigits(num1, num2);
    printf("The sum of last digits is: %d", r);
    return 0;
}
