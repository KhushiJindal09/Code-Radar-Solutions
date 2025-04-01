#include<stdio.h>
int main() {
    int n;
    scanf("%d", n);
    for (int i=0;i<=n;i++){
        for (int j=0;j <=n-i; j++) {
            printf(" ");
        }
        printf("\n");
    }
    int k=1;
    for(int k=0; k<=i; k++){
        printf("*");
    }
    return 0;
}