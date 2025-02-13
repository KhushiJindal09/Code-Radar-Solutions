#include<stdio.h>
int main() {
    int age;
    scanf("%d", &age);
    if (age > 18) {
        printf("Eligible");
    }
    else {
        printf("Not Eliigible");
    }
    return 0;
}