#include<stdio.h>
#include<math.h>

void print_matrix(int n, int matrix[n][n]) {
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void drop_rank(int ns, int n, float m[n][n], float mm[n-1][n-1]){
    for (int i=0; i<n; i++){
        int k = 0;
        for (int j=0; j<n; j++){
            if (j!=ns) {mm[i][j-k] = m[i+1][j];}
            else k +=1;
        }
    }
}
int determ (int n, float m[n][n]){ 
    int d = 0;
    if (n==1) {d = m[0][0];} 
    else {
        for (int i=0; i<n; i++){
            float mm[n-1][n-1];
            drop_rank(i, n, m, mm);
            if (i%2==0) d += m[0][i]*determ((n-1), mm);
            else d -= m[0][i]*determ((n-1), mm);
        }
    }
    return d;
}

int main() {
    int n=8;
    float k[8][8] = {{2,6,-2,3,3,6,1,6},{1,4,4,2,4,7,-2,3},{3,6,7,-1,0,5,3,1},{7,3,6,0,7,4,2,4},{1,0,-1,2,3,6,0,-2},{-1,0,2,6,-2,0,5,-1},{4,5,-2,7,4,4,5,-2},{3,3,4,6,-2,6,-2,2}};
    float d = determ(n, k);
    float a[8]={22,39,34,23,3,26,17,37};
    float b[8][8];
    printf("Ответы: ");
    for (int l=0; l<(n); l++){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                b[i][j]=k[i][j];
            }
        }
        for (int i=0; i<n; i++){
                b[i][l]=a[i];
        }
        printf("%.2f; ", determ(n, b)/d);
    }
    printf("\n");
    if (determ(n, b)/d==INFINITY || determ(n, b)/d==(-INFINITY)) printf("(Нет единственного решения.)\n");
}
