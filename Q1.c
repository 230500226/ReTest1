#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    char userName[50], password[50];
    int size =0;
    const int minSize = 6;

    printf("Welcome to Spotify, please create an account.\n");
    printf("Enter a username:");
        scanf("%s", userName);
    printf("Enter a password:");
        scanf("%s", password);

    size = sizeof(password)/sizeof(password[1]);
    
    int countAlnum = 0;
    bool specialCharacter = false;

    size = strlen(password);

    if (size < minSize){
        printf("Your password must contain at least %d characters", minSize);
        exit(1);
    }

    for (int i = 0; i < size; i++){
        if (!isalnum(password[i])==1){
            specialCharacter = true;
        }
    }

    if (!specialCharacter){
        printf("There is no special chracter in your password");
        exit(1);
    }

    printf("You have succesfully created a Spotify account\n");
    printf("Username: %s\n", userName);
    printf("Password: %s\n", password);

return 0;}