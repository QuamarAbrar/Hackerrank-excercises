#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int hardness, tensile;
    float carbon;
    
    scanf("%d %f %d", &hardness, &carbon, &tensile);
    
        if(hardness>50 && carbon<0.7 && tensile>5600){
            printf("The grade of the steel is: 10\nAll of the conditions met.");
        }
        else if(hardness>50 && carbon<0.7){
            printf("The grade of the steel is: 9\nTwo conditions met.");
        }
        else if(carbon<0.7 && tensile>5600){
            printf("The grade of the steel is: 8\nTwo conditions met.");
        }
        else if(hardness>50 && tensile>5600){
            printf("The grade of the steel is: 7\nTwo conditions met.");
        }
        else if(hardness>50 || carbon<0.7 || tensile>5600){
            printf("The grade of the steel is: 6\nOnly one condition met.");
        }
        else{
            printf("The grade of the steel is: 5\nNone of the conditions met.");
        }
    
    return 0;
}
