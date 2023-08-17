#include <stdio.h>
#include <math.h>
#define DISTANCE_FORMULA(p1x, p1y, p2x, p2y) sqrt(pow(p1x - p2x,2)+pow(p1y - p2y,2))

int main(){

    int p1x, p1y, p2x, p2y;

    printf("Please enter two ps on the catersian plan to calculate the distance");

    printf("point 1 x:");
        scanf("%d", &p1x);

    printf("point 1 y:");
        scanf("%d", &p1y);

    printf("point 2 x:");
        scanf("%d", &p2x);

    printf("point 2 y:");
        scanf("%d", &p2y);

    int ans = 0;

    ans = DISTANCE_FORMULA(p1x, p1y, p2x, p2y);

    printf("The distance between the 2 points is %d", ans);
    
return 0;}