#include<stdio.h>
int main(){
	//buoc1: khai bao bien cho truoc(i) va bien nguoi dung nhap vao(n)
	int n = 53;
	int i;
	//buoc2: nhap gia tri cho bien n 
	printf("so muon nhap: ");
	scanf("%d",&i);
	//buoc3: lap cho toi khi n==i thi dung
	while(1){
		if(i==n){
			printf("chinh xac");
			break;
		}
		else{
			printf("sai roi\n");
			printf("nhap lai: ");
			scanf("%d", &i);
		}
	}
	//buoc4: ket thuc chuong trinh
	return 0;
}
