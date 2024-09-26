 
#include<stdio.h>
int main() {
	int a, n=2;
	printf("введите число: ");
	scanf("%d", &a);
	for (n; n<a; n++){
		if (a%n==0) break;
}
	if (n==a) puts("простое");
	else puts("не простое");



}
// n изменяется только внутри цикла
// поменяла надписи в puts
