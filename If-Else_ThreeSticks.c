#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int side1, side2, side3;
    
    scanf("%d %d %d", &side1, &side2, &side3);
    
        if(side1+side2<=side3 || side2+side3<=side1 || side1+side3<=side2){
            printf("Lengths: [%d, %d, %d]\nType: Invalid\nCannot form a valid shape.", side1, side2, side3);
        }
        else if(side1==side2 && side2==side3){
            printf("Lengths: [%d, %d, %d]\nType: Equilateral\nAll sides are of the same length.", side1, side2, side3);
        }
        else if(side1==side2 || side2==side3 || side1==side3){
            printf("Lengths: [%d, %d, %d]\nType: Isosceles\nExactly two sides are equal.", side1, side2, side3);
        }
        else if(side1!=side2 && side2!=side3 && side1!=side3){
            printf("Lengths: [%d, %d, %d]\nType: Scalene\nAll sides are of different lengths.", side1, side2, side3);
        }
    
    return 0;
}
