#include<stdio.h>
int main() {
	int a, n=2;
	printf("введите число: ");
	scanf("%d", &a);
	for (n; n<a && a%n!=0; n++);
	if (n==a) puts("простое");
	else puts("не простое");






}
// not work
