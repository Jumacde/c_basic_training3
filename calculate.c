#include <stdio.h>
#include "calculate.h"

int calc_add(int ans_add) {
    int x;
    int y;
    printf("addition:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    ans_add = x + y;
    printf("%d + %d = %d\n", x, y, ans_add);
    return ans_add;
}

int calc_sub(int ans_sub) {
    int x;
    int y;
    printf("subtraction:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    ans_sub = x - y;
    printf("%d - %d = %d\n", x, y, ans_sub);
    return ans_sub;
}