#include<stdio.h>
int main(){
	//buoc1: khai bao bien i, n, accumulation
	int i, n, accumulation;
	//buoc2: xu li du lieu (dung vong lap)
	for(i=1; i<=9; i++){
		printf("\n");
		for(n=1; n<=10; n++){
			accumulation=i*n;
			printf("%d*%d=%d\n",i, n, accumulation);
		}
	}
	//buoc3: in ra man hinh bang cuu chuong
	//buoc4: ket thuc chuong trinh
	return 0;
}
