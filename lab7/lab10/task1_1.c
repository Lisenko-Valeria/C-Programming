#include "./task1.h"

struct answers getting_answers(struct circle my_circle){
    struct answers for_this_one = {2*(3.14)*my_circle.r, ((((my_circle.x0+my_circle.r)>0) != ((my_circle.x0-my_circle.r)>0)) ? "no": "yes"), .oy=((((my_circle.y0+my_circle.r)>0) != ((my_circle.y0-my_circle.r)>0))? "no\n" : "yes\n")};
    // why is this dont work without ".oy????"
    printf("%.2f %s %s", for_this_one.n, *for_this_one.ox, *for_this_one.oy);
}

struct circle getting_struct(int n){
    struct circle my_circle = {};
    for (int i=0; i<n; i++){
        printf("Введите данные для окружности: ");
        scanf("%d %d %d", &my_circle.x0, &my_circle.y0, &my_circle.r);
    return my_circle;
    }
}