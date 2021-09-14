extern const int INFINITE_ROOTS = 3;

bool is_zero(double number) {

    float eps = 0.00001;

    return (fabs(number) < eps);
}

int solve_quadratic (double a, double b, double c, double *x1, double *x2) {

    assert(x1 != NULL);

    if (is_zero(a)) {

        if (is_zero(b)) {

            if (is_zero(c)) {

                return INFINITE_ROOTS;

            } else {

                return 0;
            }

        } else {

            *x1 = (-1 * c / b);

            return 1;
        }

    } else {

        double discr = b * b - 4 * a * c;
        double sqrt_discr = sqrt(discr);

        if(discr >= 0) {

            *x1 = ( -1 * b + sqrt_discr ) / (2 * a);
            *x2 = ( -1 * b - sqrt_discr ) / (2 * a);

            return 2;

        } else {

            return 0;

        }
    }


}

