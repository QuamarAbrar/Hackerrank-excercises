// Break a 3 Digit Number into Individual Digits
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int num1);

int main() {

    int num1; 
    scanf("%d", &num1);
    split(num1);
    return 0;
}
void split(int num1){
    printf("%d %d %d", num1/100, num1/10%10, num1%10);
}
