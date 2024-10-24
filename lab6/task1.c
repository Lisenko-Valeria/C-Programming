#include<stdio.h>
int main() {
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int B[10]={2,3,4,5,6,7,8,9,10,11};
    int C[10]={0};
    for (int i = 0; i<10; i++ ){
        C[i]= A[i]+B[i];
    }
    int max=0, cnt =0, sumC=0;
    float cntC=0.0;
    for (int i = 0; i<10; i++ ){
        if ((i%2==0) && (A[i]>max)) {
            max = A[i];
        } //real
        if ((i%2==1) && (B[i]<0)){
            cnt +=1;
        } //imag 
        //4
        sumC += C[i];
        cntC += 1;

    }
    printf("Max real in A = %d, <0 мнимое in B = %d\n ", max, cnt);
    printf(" среднне арифметическое С = %lf\n ", sumC/cntC);

// C = 3 5 7 9 11 13 15 17 19 21


}