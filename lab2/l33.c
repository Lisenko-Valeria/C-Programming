#include<stdio.h>
int main() {
	float x, y;
	printf("введите x и y: ");
	scanf("%f%f", &x, &y);
	if (y>=0 && y<=2 && y>=(2*x-2) && y>=(-2*x-2)) {
		printf("принадлежит\n");
	} else {
		printf("не принадлежит\n");
	}
}
