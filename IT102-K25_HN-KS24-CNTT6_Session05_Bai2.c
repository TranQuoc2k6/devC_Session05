#include <stdio.h>
int main() {
    float average_score;
    printf("Please enter your score: ");
    scanf("%f", &average_score);
    if (average_score < 0 || average_score > 10) {
        printf("Score does not exist");
        return 0;
    }
    if (average_score >= 8) {
        printf("Hoc luc gioi");
    }else if (average_score >= 6.5) {
        printf("Hoc luc kha");
    }else if (average_score >= 5) {
        printf("Hoc luc trung binh");
    }else {
        printf("Hoc luc yeu");
    }

    return 0;
}