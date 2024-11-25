#include <stdio.h>

int main(){
	int a,i,dev;
	printf("Nhap mot so nguyen duong tu 1 den 10: ");
	scanf("%d", &i);
	for (a = 1; a <= 10; a++){
		dev = a*i;
			printf("%d*%d=%d\n", a, i, dev);
		
	}

}
