#include<stdio.h>
int main(){
	int n,a,b,tong,hieu,tich;
	float thuong;
	printf("Nhap so dau tien:");
	scanf("%d",&a);
	printf("Nhap so thu 2:");
	scanf("%d",&b);
	do{
		printf("	CALCULATOR\n");
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so\n");
		printf("5.Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&n);
		switch(n){
			case 1:
				tong=a+b;
				printf("Tong cua %d va %d la:%d\n",a,b,tong);
				break;
			case 2:
				hieu=a-b;
				printf("Hieu cua %d va %d la:%d\n",a,b,hieu);
				break;
			case 3:
				tich=a*b;
				printf("Tich cua %d va %d la:%d\n",a,b,tich);
				break;
			case 4:
				thuong=a/b;
				printf("Thuong cua %d va %d la:%.2f\n",a,b,thuong);
				break;
		}
	}while(n<5);
	return 0;
}
