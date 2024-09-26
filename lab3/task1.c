#include<stdio.h>
int main() {
	int i, n1, n2;
	printf("type 2 numbers ");
	scanf("%d %d", &n1, &n2);
	i = n1;
	for (i; !(n1%i==0 && n2%i==0); i-- );
	printf("Наибольший общий делитель = %d\n",i);

}

