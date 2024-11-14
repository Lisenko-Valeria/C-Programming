#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_matrix(int n, int** m) {
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

void form_m(int n, int** m){
    printf("Выберите: 1 - сформировать матрицу из рандомных чисел, 2 - ввести матрицу самостоятельно \n");
    int a;
    scanf("%d", &a);
    if (a==1){
        srand(time(NULL));
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                m[i][j]=rand()%100+1;
    }}}
    else {
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                int a=0;
                while (1){
                    int a=0;
                    printf("Введите элемент %d,%d: ", i, j);
                    scanf("%d", &a);
                    if (a>0) {
                        m[i][j]= a;
                        break;
                    } else {printf("Неприемлимое значение. "); scanf("%*[^\n]");}
    }}}}
    print_matrix(n, m);
}

int len_of_B(int n){
    int cnt = 0;
    for (int i=0; i<(n/2);i++){
        for (int j=1+i; j<(n-1-1*i); j++){
            cnt +=1;
        }
    }
    return cnt;
}
int* m_B(int n, int** m){
    int l = len_of_B(n);
    int* B = (int*)malloc(l*sizeof(int));
    int k=0;
    for (int i=0; i<(n/2);i++){
        for (int j=1+i; j<(n-1-1*i); j++){
                B[k] = m[i][j];
                k += 1;
            }
        }
    printf("\nМассив В: \n");
    for (int i=0; i<l; i++)
        printf("%d ", B[i]);
    printf("\n");
    return B;
    }

void num_of_elem(int n, int** m, int *B){
    int l = len_of_B(n);
    int ssum = 0;
    for (int i=0; i<n; i++ ){
        for (int j=0; j<n; j++){
            ssum += m[i][j];
        }
    }
    int cnt = 0;
    for (int i=0; i<l; i++ ){
        if (B[i]<(float)ssum/(n*n)){
            cnt+=1;
        }
    }
    printf("Количество элементов массива В меньше ср.знач матрицы: %d (ср.знач = %f)\n\n", cnt, (float)ssum/(n*n));
}

int* kind_of_buble_sort(int n, int* m){
    for (int i=0; i<n; i++){ 
        for (int j=0; j<(n-1); j++){
            if (m[j]>m[j+1]){
                int tmp=m[j];
                m[j]=m[j+1];
                m[j+1]=tmp;
    }}}
    return m;
}

int sort_main_d(int n, int** m){
    int* main_d = (int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++ ){
        main_d[i] = m[i][i];
    }
    main_d = kind_of_buble_sort(n, main_d);
    for (int i=0; i<n; i++ ){
        m[i][i] = main_d[i];
    }
    printf("Упорядоченная главная диагональ: \n");
    print_matrix(n, m);
    free(main_d);
    main_d = NULL;
}

int main(){
    int n=0;
    while (1){
        printf("Введите размер матрицы ");
        scanf("%d", &n);
        if (n>0) {
            break;
        } else {printf("Неприемлимое значение. "); scanf("%*[^\n]");}
    }
    
    int** arr = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
       arr[i] = (int*)malloc(n*sizeof(int));
    }

    form_m(n, arr);

    int* B = m_B(n, arr);

    num_of_elem(n, arr, B);
    sort_main_d(n, arr);

    //cleaning
    for (int i=0; i<n; i++) {
      free(arr[i]);
      arr[i] = NULL;
    }
    free(arr);
    arr = NULL;
    free(B);
    B = NULL;
}