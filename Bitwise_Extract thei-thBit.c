#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, i, res;
    
    scanf("%d %d", &n, &i);
    
    res = (n>>i)&1;
    printf("%d", res);
    
    return 0;
}
