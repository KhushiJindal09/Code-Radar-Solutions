#include<stdio.h>
int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%s", &name);
    scanf("%d",&age);
    scanf("%s", &hobby);
    printf("name, age, hobby: %s \n%d \n%s", name,age,hobby);
    return 0;
}