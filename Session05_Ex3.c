#include <stdio.h>

int main() {
    int a, sum = 0;
	printf("Nhap mot so nguyen duong: ");
    scanf("%d", &a);
	for(int i = 1; i <= a; i++) {
        sum += i;
    }
	printf("Tong cac so tu 1 den %d la: %d\n", a, sum);
}
