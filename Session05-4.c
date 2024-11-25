#include<stdio.h>
int main(){
	//buoc1: khai bao bien i, n, accumulation
	int i, n, accumulation;
	//buoc2: nhap gia tri cho bien i(1 den10)
	printf("bang cuu chuong so : ");
	scanf("%d", &i);
	//buoc3: in ra bang cuu chuong tuong ung
	for(n=1; n<=10 ; n++){
		accumulation=i*n;
		printf("%d*%d=%d\n",i ,n ,accumulation);
	}
	//buoc4: ket thuc chuong trinh
	return 0;
}
