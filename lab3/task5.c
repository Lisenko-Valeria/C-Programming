
#include<stdio.h>
int main() {
	int s=0, a, n=2;
	printf("введите число \n");
	scanf("%d", &a);
	for (int s, n; n<a; n++)
		if (a%n==0) s++;
	if (s==0) puts("простое");
	else puts("не простое");


//s число делителей

}
