#include<stdio.h>
int main() {
	int a, i=1, cnt0 = 0, cnt1 = 0;
	printf("введите число ");
	scanf("%d", &a);
	while (a>=i){
		if (a&i == 1) cnt1 += 1; 
		else cnt0 += 1;
	    a = a>>1;
		

	}
	printf("количество нулей-%d, количество единиц -%d\n", cnt0, cnt1);




}
