#include <stdio.h>
int main() {
    int a, b;
    float x;
    printf("Please enter a: ");
    scanf("%d", &a);
    printf("Please enter b:");
    scanf("%d", &b);
    x = -(float)b/(float)a;
    printf("x = %.2f", x);
    return 0;
}