#include<stdio.h>
int main() {
    int age, price;
    printf("Input your age: ");
    scanf("%d", age);
    if (age < 0 || age > 200) {
        printf("Age no exist");
    }else {
        if (age > 60) {
            price = 20000*70/100;
            printf("Ticket price is: %d");
        }else if (age > 18) {
            price = 20000*100/100;
            printf("Ticket price is: %d");
        }else if (age >= 6) {
            price = 20000*50/100;
            printf("Ticket price is: %d");
        }else {
            price = 0;
            printf("Ticket price is: %d");
        }
    }
    return 0;
}