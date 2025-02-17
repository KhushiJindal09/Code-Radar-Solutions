#include<stdio.h>
int main() {
    char type;
    scanf("%d", &type);
    if (type >='a' && type <= 'z') {
        if (type == 'a' || type =='e' || type == 'i' || type == 'o' || type == 'u') {
            printf("Vowels");
        }
        else if(type == 'A' || type =='E' || type == 'I' || type == 'O' || type == 'U'){
            printf("Vowels");
        }
        else {
            printf("Consonants");
        }
    }
    else if (type >= '0' && type <= '9') {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}