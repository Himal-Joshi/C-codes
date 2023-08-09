/*Write a program to print roots of a quadratic equation (both real and imaginary).*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter coefficients A, B, and C from the quadratic equation Ax^2 + Bx + C: ");
    scanf("%f %f %f", &a, &b, &c);

    d = pow(b, 2) - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are %f and %f\n", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("The root is %f\n", r1);
    }
    else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("The roots are %f + %fi and %f - %fi\n", real, imag, real, imag);
    }

    getch();
    return 0;
}
