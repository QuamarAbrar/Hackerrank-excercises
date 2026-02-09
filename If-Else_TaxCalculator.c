#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    float tax;
    scanf("%d", &num);
    int flag = 0;
    
    if(num>=0){
        if(num<=250000){
        tax = 0;
        }
        else if(num>250000 && num<=500000){
        tax = (num-250000)*0.05;
        }
        else if(num>500000 && num<=1000000){
        tax = (250000)*0.05 + (num - 500000)*0.20;
        }
        else if(num>1000000){
        tax = (250000)*0.05 + (500000)*0.20 + (num - 1000000)*0.30;
        }
        printf("%.2f", tax);
        }
    else{
            printf("INVALID");
        }
    
    return 0;
}
