// lowercase to UPPERCASE
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char lower;
    scanf("%c", &lower);
    char upper = lower - 32;
    printf("The uppercase of %c is %c", lower, upper);
    return 0;
}
