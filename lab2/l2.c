#include<stdio.h>
int main(){
	float a;
	char b;
	float c =  0.0;
	printf("введите температуру: ");
	scanf("%f%c", &a, &b);
	if (b=='c' || b=='C'){
		c = (a*9/5)+32;
		printf("%0.1f f\n", c);
	} else if (b=='f' || b =='F'){
		c = (a-32)*5/9;
		printf("%0.1f c\n", c);
	} else {
		printf("error\n");
	}


}
// f = (c*9/5)+32
// c = (f-32)*5/9
