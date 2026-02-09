#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int choice1, choice2, choice3, choice4;
    
    scanf("%d", &choice1);
    
    if(choice1==1){
    scanf("%d", &choice2);
    scanf("%d", &choice3);
    scanf("%d", &choice4);
        printf("Player chooses the Left path.\n");
        if(choice2==1){
            printf("Poor choice, Game Over!\n");
        }
        else if(choice2==2){
            printf("Player found a bridge.\n");
            
            if(choice3==1){
                printf("Player crosses the bridge safely.\n");
                
                if(choice4==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
                else if(choice4==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(choice4==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                }
            }
            else{
                
                if(choice3==2){
                    
                    if(choice4>=1 && choice4<=3){
                        printf("Poor luck, Game Over!\n");
                    }
                }
            }
        }
    }
    else if(choice1==2){
            scanf("%d", &choice2);
            scanf("%d", &choice3);
            printf("Player chooses the Middle path.\n");
            if(choice2==582 || choice2==285){
                printf("Player solved the puzzle.\n");
                if(choice3==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
                else if(choice3==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(choice3==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                }
            }
            else{
                printf("Foolish player, Game Over!\n");
            }
        }
        else if(choice1==3){
            scanf("%d", &choice2);
            scanf("%d", &choice3);
            printf("Player chooses the Right path.\n");
            if(choice2==30){
                printf("Player solved the puzzle.\n");
                if(choice3==3){
                    printf("Congratulations!! You won the treasure.\n");
                }
                else if(choice3==1){
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(choice3==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                }
            }
            else{
                printf("Foolish player, Game Over!\n");
            }
        }
    
    return 0;
}
