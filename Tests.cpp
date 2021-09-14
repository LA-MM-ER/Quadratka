int test_classic() {
    double a = 1, b = -5, c = 6;
    double x1_true = 2, x2_true = 3;
    double x1_end = 0,  x2_end = 0;

    solve_quadratic(a, b, c, &x1_end, &x2_end);

    if ((x1_true == x1_end) && (x2_true == x2_end) || (x1_true == x2_end) && (x2_true == x1_end) ) {

        printf("ok\n");
        return 1;

    } else {

        printf("error\n");
        return 0;
    }
}

int test_infinite() {
    int a = 0, b = 0, c = 0;
    double x1_end = 0, x2_end = 0;

    if (solve_quadratic(a, b, c, &x1_end, &x2_end) != 3) {

        printf ("error\n");
        return 0;

    } else {

        printf("ok\n");
        return 1;
    }
}

int test_a_zero_only() {
    int a = 0, b = 2, c = -4;
    int x1_true = 2;
    double x1_end = 0, x2_end = 0;

    solve_quadratic(a, b, c, &x1_end, &x2_end);

    if (x1_true == x1_end)  {

        printf("ok\n");
        return 1;

    } else {

        printf("error\n");
        return 0;

    }
}

int test_ab_zero_cnot() {
    double a = 0, b = 0, c = 3, x1 = 0, x2 = 0;

    if (solve_quadratic(a, b, c, &x1, &x2) != 0) {

        printf ("error\n");
        return 0;

    } else {

        printf("ok\n");
        return 1;
    }
}

int test_negative_discr() {
    double a = 6, b = 2, c = 1, x1 = 0, x2 = 0;

    if (solve_quadratic(a, b, c, &x1, &x2) != 0) {

        printf ("error\n");
        return 0;

    } else {

        printf("ok\n");
        return 1;
    }
}

#define UNITTEST(func)                         \
    if (!func){                                \
                                               \
        printf("%s not passed\n", #func);      \
        return -1;                             \
                                               \
    } else {                                   \
                                               \
        printf("ok");                          \
        return 0;                              \
    }                                          \

int UnitTest() {
    UNITTEST(test_negative_discr())
    UNITTEST(test_ab_zero_cnot())
    UNITTEST(test_a_zero_only())
    UNITTEST(test_infinite())
    UNITTEST(test_classic())
}
