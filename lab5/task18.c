
#include<stdio.h>
int main () {
	int a, b, i;
	printf("введите число больше 0: ");
	scanf("%d", &a);
	while (a!=0) {
		
		b = a;
		i = 0;
		for (b; b>15; b = b>>4) i = i+4;
	//	printf("|i = %d, b = %d, %d| ", i, b, 15<<(i-4)&a);
		printf("%x", b);
		int j =i;
	//	if ((((i!=0 && ((b<<i)^a)==0))))  {a = (b<<i)^a; printf("0");}
		if ((i!=0 && ((15<<(i-4))&a)==0)) {
			for (j; (((15<<(j-4))&a)==0 && j>0) ; j=j-4) printf("0");
			a = (b<<i)^a;
		}
		else {a = (b<<i)^a;}

	}



}
