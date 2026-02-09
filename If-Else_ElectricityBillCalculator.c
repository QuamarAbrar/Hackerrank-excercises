#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int units;
    float bill;
    
    scanf("%d", &units);
    
    int flag = 0;
    
    if (units>=0 && units<=100){
       bill = units*5 - (units*5)*0.10; 
    }
    else if(units>100 && units<=300){
        bill = 100*5 + (units-100)*7;
        
        if(bill<=1200){
            bill = bill - bill*0.10;
         }
        else{
            bill = bill;
        }
    }
    else if(units>300){
        bill = 100*5 + 200*7 + (units-300)*10;
    }
    else{
        flag = 1;
        printf("Invalid Input!");
    }
    if(flag==0){
        printf("The electricity bill is: %.2f.", bill);
    }
    return 0;
}
