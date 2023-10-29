//write a C program to find the roots of the following equation:
//e^ax² + (log10b)x + c^d = 0
//Where a, b, c and d are integer values and the program should request for those integer values.
//If calculation gives the imaginary value then output will be 'roots are imaginary'.

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;

    printf("Values of a, b, c, and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);


    double det = pow(log10(b), 2) - 4 * exp(a) * pow(c, d);

    if (det >= 0) {
        double x1 = (-log10(b) + sqrt(det)) / (2 * exp(a));
        double x2 = (-log10(b) - sqrt(det)) / (2 * exp(a));
        printf("Roots of the equation are: %.3lf and %.3lf\n", x1, x2);
    }
    else {

        printf("Roots are imaginary\n");
    }

    return 0;
}


