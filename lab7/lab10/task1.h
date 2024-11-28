#include<stdio.h>
#include<math.h>
struct circle{
    int x0;
    int y0;
    int r;
};

struct answers{
    float n;
    char* ox; // how did i put here a "true"???
    char* oy;
};

struct circle getting_struct(int n);
struct answers getting_answers(struct circle my_circle);