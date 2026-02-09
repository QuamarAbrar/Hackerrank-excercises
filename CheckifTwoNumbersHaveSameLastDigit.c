// Check if Two Numbers Have Same Last Digit
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, lastDigit1, lastDigit2, c, d;
    scanf("%d %d", &a, &b);
    
    c = (a/10);
    d = (b/10);
    lastDigit1 = a - c*10;
    lastDigit2 = b - d*10;
    
    if (lastDigit1==lastDigit2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
