#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num1, num2;
    scanf("%d\n%d", &num1, &num2);
    
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    
    printf("%d\n%d", num1, num2);
    return 0;
}
