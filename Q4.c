#include <stdio.h>

int retiredAge[6]={0,0,0,0,0,0};

void retireAge(int *Age){ 

    for (int i = 0 ; i<6 ; i++){
        retiredAge[i] = *(Age + i) + 20;
    }

    return retiredAge;
}

int main(){

    int EmployeeAge[6] = {23, 38, 22, 19, 46, 34};

    printf("The retired age of all employees are bellow :\n");

    retireAge(&EmployeeAge);

    for (int i = 0 ; i<6 ; i++){
        printf("Employee %d retires at %d\n", i+1 , retiredAge[i]);
    }

return 0;}