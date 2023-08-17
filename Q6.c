#include <stdio.h>
#include <stdlib.h>
#define MAX_SUBJECTS 3
#define MAX_STUDENTS 5
#define MAX 100;
#define MIN 0;

    //In all marks arrays, the order of subjects is SDN150S, MTH150S, SSA260S

int main(){

    int marks[MAX_STUDENTS][MAX_SUBJECTS]={0};

    printf("Please input the makrs of the students\n");

   for (int i = 0; i < MAX_STUDENTS; i++){
    printf("Please enter the marks of Student %d\n", i+1);
       for (int j = 0; j < MAX_SUBJECTS; j++){
            printf("Mark for subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
       }
   }

    int minMark[MAX_SUBJECTS];
    int maxMark[MAX_SUBJECTS];
    int totalMark[MAX_SUBJECTS];

    for (int i = 0; i < MAX_STUDENTS; i++){
       for (int j = 0; j < MAX_SUBJECTS; j++){
            if (marks[i][j] > 0){
                maxMark[i] = marks[i][j];
            }
            if (marks[i][j] < 100){
                minMark[i] = marks[i][j];
            }
        totalMark[i] += marks[i][j];
       }
   }

    int meanMark[MAX_SUBJECTS];

    for (int i = 0; i < MAX_SUBJECTS; i++){
        meanMark[i] = totalMark[i] / MAX_STUDENTS;    
    }

   FILE *file = fopen("./lowpassrate.txt", "a");

    if (file == NULL){
        printf("Erorr opening file");
        exit(1);
    }

    for (int j = 0; j < MAX_SUBJECTS; j++){
        if (meanMark[j] > 60 ){
            fprintf(file,"Subject %d has a mean score of less than 60%%\n", j+1 );
        }
    }

    fclose(file);
     
return 0;}