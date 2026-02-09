// Area of a Rectangle
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int breadth);

int main() {
    int length, breadth;
    scanf("%d %d", &length, &breadth);
    int res = area(length, breadth);
    printf("The area is: %d units", res);
    return 0;
}
int area(int length, int breadth){
    int out = length*breadth;
    return out;
}
