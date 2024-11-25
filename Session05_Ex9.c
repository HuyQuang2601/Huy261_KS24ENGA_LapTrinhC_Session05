#include <stdio.h>

int main(){
	int a,b,c,i;
	while(1){
		printf("\tMENU\n");
		printf("1 Nhap 3 so\n");
		printf("2 Tong 3 so\n");
		printf("3 Trung binh cong 3 so\n");
		printf("4 So nho nhat\n");
		printf("5 So lon nhat\n");	
		printf("6 Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &c);
		while(c=6){
		
		switch(c){
			case 1:
				printf("Nhap 3 so: ");
				scanf("%d %d %d", &a,&b,&i);
				printf("3 so la: %d %d %d\n",a,b,i);
				break;
			case 2:
				printf("Nhap 3 so: ");
				scanf("%d %d %d", &a,&b,&i);
				printf("Tong 3 so = %d\n", a+b+i);
				break;
			case 3:
				printf("Nhap 3 so: ");
				scanf("%d %d %d", &a,&b,&i);
				printf("Trung binh cong 3 so = %d\n", (a+b+i)/3);
				break;
		
			case 4:
				printf("Nhap 3 so: ");
				scanf("%d %d %d", &a,&b,&i);
				if(a<b & a<c){
					printf("So nho nhat la %d\n",a);
				}else if(b<c & b<a){
					printf("So nho nhat la %d\n",b);
				}else if(c<a & c<b){
					printf("So nho nhat la %d\n",i);
				}
				break;
			case 5:
				printf("Nhap 3 so: ");
				scanf("%d %d %d", &a,&b,&i);
				if(a>b & a>c){
					printf("So lon nhat la %d\n",a);
				}else if(b>c & b>a){
					printf("So lon nhat la %d\n",b);
				}else if(c>a & c>b){
					printf("So lon nhat la %d\n",i);
				}
				break;
				
			case 6:
				break;
			default:
				printf("Lua chon cua ban khong hop le");
		}
	c = 6;
	}
	}
}	
