#include <stdio.h>

int main(){
	int a,b,i,min,bcnn;
	printf("Nhap 2 so nguyen: ");
	scanf("%d %d", &a,&b);
	min = a < b ? a : b;
	for(int i = min; i>=1; i--){
		if ((a%i==0) && (b%i==0)){
			bcnn = a*b/i;
			printf("BCNN cua %d va %d la %d", a,b,bcnn);
			break;
		}
	}

}
