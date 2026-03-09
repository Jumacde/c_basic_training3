#include <stdio.h>
#include "calculate.h"

int calc_add() {
    int x;
    int y;
    printf("addition:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    int ans_add = x + y;
    printf("%d + %d = %d\n", x, y, ans_add);
    return ans_add;
}

int calc_sub() {
    int x;
    int y;
    printf("subtraction:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    int ans_sub = x - y;
    printf("%d - %d = %d\n", x, y, ans_sub);
    return ans_sub;
}

int calc_mul(int x, int y) {
    int ans_mul = x * y;
    printf("multiplication:\n");
    printf("%d * %d = %d\n", x, y, ans_mul);
    return ans_mul;

}
int calc_div(int x, int y) {
    int ans_div = x / y;
    printf("divisition:\n");
    printf("%d / %d = %d\n", x, y, ans_div);
    return ans_div;
}