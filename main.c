#include <stdio.h>
#include "calculate.h"

int main(int argc, char** argv) {
    int add_calc = calc_add();
    int sub_calc = calc_sub();
    
    int x;
    int y;
    printf("next inputted x and y are shared by functions\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    int mul_calc = calc_mul(x, y);
    int div_calc = calc_div(x, y);

    printf("\nnext\n");
    int add_result = calc_add2(x, y);
    int sub_result = calc_sub2(x, y);
    int mod_calc = calc_mod(add_result, sub_result);

    return 0;
}