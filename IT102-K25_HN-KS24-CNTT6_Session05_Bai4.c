#include<stdio.h>
int main() {
    int income;
    printf("plese input income(trieu dong): ");
    scanf("%d", &income);
    if ( income < 0) {
        printf("Income is less than zero");
    }else {
        if (income > 10000000) {
            income = income * 15/100;
            printf("Income tax is :%d", income);
        }else if (income > 5000000) {
            income = income * 10/100;
            printf("Income tax is :%d", income);
        }else {
            income = income * 5/100;
            printf("Income tax is :%d", income);
        }
    }
    return 0;
}