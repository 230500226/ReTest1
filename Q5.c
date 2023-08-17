#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    int *input = NULL;

    printf("Please enter the amount of digits to store:");
        scanf("%d", &n);

    input = (int *)malloc(n * sizeof(int));

    printf("Enter your number of %d digits\n", n);
        scanf("%d", input);

    printf("You entered %d\n", *input);

    free(input);

return 0;}