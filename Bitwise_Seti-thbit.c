// Bitwise_Set i-th bit
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, i, res;
    scanf("%d", &n);
    scanf("%d", &i);
    
    res = n | (1<<i);
    printf("%d", res);
    return 0;
}
