#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int age, income, risk;
    
    scanf("%d", &age);
    scanf("%d", &income);
    scanf("%d", &risk);
    
    if(age<30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(age>=30 && age<=50){
        if(risk<3){
            if(income>30000){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
            else{
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
        }
        else{
            if(income<=30000){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
            else{
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        }
    }
    else if(age>50){
        if(risk<3){
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        else{
            if(income>75000){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
            else if(income>30000){
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
            }
            else{
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
        }
    }
        
    return 0;
}
