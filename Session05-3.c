#include<stdio.h>
int main(){
	//buoc1: khai bao bien i, n, sum
	int i, sum, n ;
	//buoc2: nhap gia tri cho bien i
	printf("i= ");
	scanf("%d", &i);
	//buoc3: xu li tinh toan 
	for( n=1 ; n<=i ; n++){
		sum+=n;
	}
	//buoc4: in ra man hinh 
	printf("ket qua tu 1 den %d la = %d", i, sum);
	//buoc5: ket thuc chuong trinh
	return 0;
}
