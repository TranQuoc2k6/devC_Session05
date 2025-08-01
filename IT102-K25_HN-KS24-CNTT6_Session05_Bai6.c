#include<stdio.h>
int main() {
    int a, b, total, minus, multiplication;
    float division;
    char math;

    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d",&b);

    printf("Nhap phep tinh muon tinh(+, -, *, /):");
    scanf(" %c", &math);

    switch (math) {
        case '+' : {
            total = a + b;
            printf("%d + %d = %d", a, b, total);
            break;
        }
        case '-' : {
            minus = a - b;
            printf("%d - %d = %d", a, b, minus);
            break;
        }
        case '*': {
            multiplication = a * b;
            printf("%d * %d = %d", a, b, multiplication);
            break;
        }
        case '/': {
            if (b == 0) {
                printf("Khong co phep chia cho 0");
            }else {
                division = (float)a / (float)b;
                printf("%d / %d = %f",a , b, division);
            }
            break;
        }
        default: {
            printf("Phep toan lua chon khong hop le");
            break;
        }
    }
    return 0;
}