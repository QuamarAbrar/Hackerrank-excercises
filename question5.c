// Convert Time into Seconds
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int hour, min, sec;
    scanf("%d %d %d", &hour, &min, &sec);
    printf("Total seconds: %d", hour*60*60 + min*60 + sec);
    return 0;
}
