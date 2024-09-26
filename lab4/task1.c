#include<stdio.h>
int main(){
	int a, ns, kz;
	printf("введите число ");
	scanf("%d", &a);

	for (int i=1, kp=0; i<=a; i++){
		ns = i%4;
		if (ns==1) kz=1;
		else if (ns==2) kz=3;
		else if (ns==3) kz=5;
		else kz=7;
		kp = (7-kz)/2;
		for (kp; kp>0; kp--) printf(" ");
		for (kz; kz>0; kz--) printf("*");
		for (kp; kp>0; kp--) printf(" ");
		printf("\n");
	}


}

