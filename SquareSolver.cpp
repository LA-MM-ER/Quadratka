///     @file Untitled1.cpp
///     \author Georgiy Moskvin
///     \version 1.0.0
///     \date 14.09.2021

#include <cmath>
#include <stdio.h>
#include <errno.h>
#include <assert.h>
#include <stdlib.h>
#include "Func_test.h"

#define TEST
#ifdef TEST
#define RUN_PROG UnitTest();
#else
#define RUN_PROG solve_eq();
#endif

int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

    printf("enter a, b and c \n");

    int num_read = scanf("%lf %lf %lf", &a, &b, &c);
    if (num_read != 3) {

        printf("wrong coefficients");
        return EXIT_FAILURE;

    } else {

        int num_roots = solve_quadratic(a, b, c, &x1, &x2);

        switch(num_roots) {

            case 0:
                printf("No roots\n");
                break;

            case 1:
                printf("root equals %lf\n", x1);
                break;

            case 2:
                printf("first root equals %lf,\n", x1);
                printf("second root equals %lf\n", x2);
                break;

            case INFINITE_ROOTS:
                printf("equation has infinite roots\n");
                break;

            default:
                printf("Error, num_roots is wrong and equals %d\n", num_roots);
                break;
        }
    }

    return 0;
}
