#include<stdio.h>
int main() {
	int a, b, n;
	printf("введите 2 числа: ");
	scanf("%d %d", &a, &b);
	n = a;
	for (n; n%a!=0 || n%b!=0; n++);
	printf("Наименьшее число, которое делится на данные числа, без остатка: %d\n", n);





}
