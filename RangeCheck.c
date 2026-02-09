// Range Check
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, low, high;
    scanf("%d %d %d", &n, &low, &high);
    if (n<=high){
        if (n>=low){
            printf("In Range");
        }
        else{
            printf("Out of Range");
        }
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
