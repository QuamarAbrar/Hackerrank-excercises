#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d);

int main() {

    int a, b, c, d, out;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    out = buildNumber(a, b, c, d);
    printf("The number is: %d", out);
    return 0;
}
int buildNumber(int a, int b, int c, int d) 
{
    int num = a*1000+b*100+c*10+d;
    int res = num*5;
    return res;
}
