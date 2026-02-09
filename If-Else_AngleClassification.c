#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int angle, logic;
    
    scanf("%d", &angle);
    
    logic = angle%360;
    
    if(angle==0){
        printf("Acute Angle");
    }
    else if(logic==0){
        printf("Full Rotation");
    }
    else if(logic>0 && logic<90){
        printf("Acute Angle");
    }
    else if(logic==90){
        printf("Right Angle");
    }
    else if(logic>90 && logic<180){
        printf("Obtuse Angle");
    }
    else if(logic==180){
        printf("Straight Angle");
    }
    else if(logic>180 && logic<360){
        printf("Reflex Angle");
    }
    
    return 0;
}
