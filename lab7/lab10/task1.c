#include "task1.h"

int main(){
    int n;
    printf("введите количество окружностей: ");
    scanf("%d", &n);
    struct circle my_circle = getting_struct(n);
    getting_answers(my_circle);  
    }