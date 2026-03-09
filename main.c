#include <stdio.h>
#include "calculate.h"

int main(int argc, char** argv) {
    int add_calc = calc_add();
    int sub_calc = calc_sub();
    
    int x;
    int y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    int mul_calc = calc_mul(x, y);
    int div_calc = calc_div(x, y);

    return 0;
}