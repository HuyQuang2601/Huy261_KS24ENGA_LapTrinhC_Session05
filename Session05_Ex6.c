#include <stdio.h>

int main(){
	int a,b,c,i;
	printf("Nhap vao 2 so bat ki: ");
	scanf("%d %d", &a, &b);
	while(1){
		printf("\tCANCULATOR\n");
		printf("1 Tong 2 so\n");
		printf("2 Hieu 2 so\n");
		printf("3 Tich 2 so\n");
		printf("4 Thuong 2 so\n");
		printf("5 Thoat\n");	
		printf("Lua chon cua ban: ");
		scanf("%d", &c);
		if (c==1){
			printf("Tong 2 so = %d\n", a+b);
		}else if(c==2){
			printf("Hieu 2 so = %d\n", a-b);
		}else if(c==3){
			printf("Tich 2 so = %d\n", a*b);
		}else if(c==4){
			printf("Thuong 2 so = %d\n", a/b);	
		}else if(c==5){
			break;
		}else{
			printf("Lua chon cua ban khong hop le");
		}
	c=5;
}
}
