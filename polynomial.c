#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value for x:");
    scanf("%f", &x);

   // float x1 , x2, x3, x4, x5;

  /*  x1 = 3 * (x * x * x * x * x);
    x2 = 2 * (x * x * x * x);
    x3 = 5 * (x * x * x);
    x4 = x * x;
    x5 = 7 * x; */

    float polynomial_formula;
    
    polynomial_formula = (((((3* x + 2)* x-5)* x - 1) * x + 7) * x - 6);

    printf("The value of the p1olynomial formula: %.2f\n", polynomial_formula);

    return 0;
}
