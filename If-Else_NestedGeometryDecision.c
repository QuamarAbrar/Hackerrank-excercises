#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, a, b, c, d, A, B, C, D;
    
    scanf("%d", &n);
    
    if(n==0){
        printf("Circle");
    }
    else if(n==3){
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);
        
        if((a+b>c && a+c>b && b+c>a) && A+B+C==180 && (A>0 && B>0 && C>0 && a>0 && b>0 && c>0)){
            if(a==b && b==c && A==60 && B==60 && C==60){
                printf("Equilateral Triangle");
            }
            else if((a==b && B==A && a!=c && b!=c && A!=C && B!=C) || (a==c && A==C && a!=b && b!=c && A!=B && B!=C) || (b==c && B==C && a!=b && a!=c && A!=C && A!=B)){
                printf("Isosceles Triangle");
            }
            else if(a!=b && b!=c && a!=c && A!=B && B!=C && A!=C){
                printf("Scalene Triangle");
            }
            else{
                printf("Invalid Figure");
            }
        }
        else{
            printf("Invalid Figure");
        }
    }
    else if(n==4){
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);
        
        if(a==b && b==c && c==d && A+B+C+D==360 && (A>0 && B>0 && C>0 && D>0 && a>0 && b>0 && c>0 && d>0)){
            if(A==90 && B==90 && C==90 && D==90){
                printf("Square");
            }
            else if(A==C && B==D){
                printf("Rhombus");
            }
            else{
                printf("Invalid Figure");
            }
        }
        else if(a==c && b==d && A+B+C+D==360 && (A>0 && B>0 && C>0 && D>0 && a>0 && b>0 && c>0 && d>0)){
            if(A==90 && B==90 && C==90 && D==90){
                printf("Rectangle");
            }
            else if(A==C && B==D){
                printf("Parallelogram");
            }
            else{
                printf("Invalid Figure");
            }
        }
        else{
            printf("Invalid Figure");
        }
    }
    else{
        printf("Invalid Figure");
    }
    
    return 0;
}
