#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, i1, i2, i3, r1, r2, r3;
    
    scanf("%d %d %d %d %d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10);
    scanf("%d %d", &i1, &r1);
    scanf("%d %d", &i2, &r2);
    scanf("%d %d", &i3, &r3);
    
    if(i1==0){
        d1 = (d1 + r1)%10;
    }
    else if(i1==1){
        d2 = (d2 + r1)%10;
    }
    else if(i1==2){
        d3 = (d3 + r1)%10;
    }
    else if(i1==3){
        d4 = (d4 + r1)%10;
    }
    else if(i1==4){
        d5 = (d5 + r1)%10;
    }
    else if(i1==5){
        d6 = (d6 + r1)%10;
    }
    else if(i1==6){
        d7 = (d7 + r1)%10;
    }
    else if(i1==7){
        d8 = (d8 + r1)%10;
    }
    else if(i1==8){
        d9 = (d9 + r1)%10;
    }
    else if(i1==9){
        d10 = (d10 + r1)%10;
    }
    
    if(i2==0){
        d1 = (d1 + r2)%10;
    }
    else if(i2==1){
        d2 = (d2 + r2)%10;
    }
    else if(i2==2){
        d3 = (d3 + r2)%10;
    }
    else if(i2==3){
        d4 = (d4 + r2)%10;
    }
    else if(i2==4){
        d5 = (d5 + r2)%10;
    }
    else if(i2==5){
        d6 = (d6 + r2)%10;
    }
    else if(i2==6){
        d7 = (d7 + r2)%10;
    }
    else if(i2==7){
        d8 = (d8 + r2)%10;
    }
    else if(i2==8){
        d9 = (d9 + r2)%10;
    }
    else if(i2==9){
        d10 = (d10 + r2)%10;
    }
    
    if(i3==0){
        d1 = (d1 + r3)%10;
    }
    else if(i3==1){
        d2 = (d2 + r3)%10;
    }
    else if(i3==2){
        d3 = (d3 + r3)%10;
    }
    else if(i3==3){
        d4 = (d4 + r3)%10;
    }
    else if(i3==4){
        d5 = (d5 + r3)%10;
    }
    else if(i3==5){
        d6 = (d6 + r3)%10;
    }
    else if(i3==6){
        d7 = (d7 + r3)%10;
    }
    else if(i3==7){
        d8 = (d8 + r3)%10;
    }
    else if(i3==8){
        d9 = (d9 + r3)%10;
    }
    else if(i3==9){
        d10 = (d10 + r3)%10;
    }
        
    printf("%d %d %d %d %d %d %d %d %d %d", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10);
    
    return 0;
}
