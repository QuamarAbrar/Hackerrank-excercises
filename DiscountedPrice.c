// Discounted Price
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float discounted(float price, float percent);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float price, percent;
    
    scanf("%f %f", &price, &percent);
    
    float res = discounted(price, percent);
    printf("The final price is: %f", res);
    
    return 0;
}
float discounted(float price, float percent){
    float discountedPrice = price - (price*percent)/100;
    return discountedPrice;
}
