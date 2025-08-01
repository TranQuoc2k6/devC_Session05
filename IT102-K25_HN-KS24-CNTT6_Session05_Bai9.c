#include<stdio.h>
int main() {
    float salary_coefficien, salary;
    int day_work;
    int poision;
    int reward;

    printf("Nhap he so luong:");
    scanf("%f", &salary_coefficien);

    printf("Nhap so ngay cong trong thang:");
    scanf("%d", &day_work);

    if (day_work > 26) {
        reward = (day_work - 27) * 200000;
    }else {
        reward = 0;
    }

    printf("Nhap chuc vu cua ban:(1->3) "
           "1:Nhan vien "
           "2:To truong "
           "3:Quan ly  :");
    scanf("%d", &poision);

    switch (poision) {
        case 1: {
            salary = (float)day_work * 160000 * salary_coefficien + 500000 + (float)reward;
            printf("Luong cua ban la: %.f", salary);
            break;
        }
        case 2: {
            salary = (float)day_work * 160000 * salary_coefficien + 1000000 + (float)reward;
            printf("Luong cua ban la: %.f", salary);
            break;
        }
        case 3: {
            salary = (float)day_work * 160000 * salary_coefficien + 2000000 + (float)reward;
            printf("Luong cua ban la: %.f", salary);
            break;
        }
        default: {
            printf("Lua chon khong hop le");
            break;
        }
    }
    return 0;
}
