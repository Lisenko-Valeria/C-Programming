#include<stdio.h>
void print_matrix(int n, int matrix[n][n]) {
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }}

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 1;
    int N = n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j]=0;
        }
    }

    for (int i=0; n>0; i++){
        for (int j=0; j<n;j++){//right  
            a[i][j+i] = cnt;
            cnt +=1;  
        }
        n -=1;  

        if (n>0){
            for (int j=(N-n-i); j<=(n+i); j++){ //down
                a[j][n+i] = cnt;
                cnt +=1;  
            }
            
            for (int j=n+i-1; j>=i;j--){ // left
                a[n+i][j]=cnt;
                cnt +=1;
            }
            n-=1;
        }

        if (n>0){
           for (int j=n+i; j>i;j--){//up
            a[j][i] = cnt; 
            cnt +=1; 
            } 
        }
    }
    print_matrix(N, a);
}