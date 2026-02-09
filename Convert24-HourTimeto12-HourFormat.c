// Convert 24-Hour Time to 12-Hour Format
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int hour, min;
    scanf("%d %d", &hour, &min);
    if(min>=10){
    if (hour==0 || hour==24){
        printf("%d:%d AM", hour+12, min);
    }
    else if (hour==12){
        printf("%d:%d PM", hour, min);
    }
    else if (hour>12){
        printf("%d:%d PM", hour-12, min);
    }
    else if (hour<12){
        printf("%d:%d AM", hour, min);
    }
        }
    else{
        if (hour==0 || hour==24){
        printf("%d:0%d AM", hour+12, min);
    }
    else if (hour==12){
        printf("%d:0%d PM", hour, min);
    }
    else if (hour>12){
        printf("%d:0%d PM", hour-12, min);
    }
    else if (hour<12){
        printf("%d:0%d AM", hour, min);
    }
    }
    return 0;
}
