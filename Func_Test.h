#include "Functions.cpp"
#include "Tests.cpp"

//! @brief This function compares <double> variables with zero
//! @param [in] eps - the precision with which we measure a variable
//! @return 1 or 0 depending on the result of comparison with <eps>

bool is_zero(double number);

//! @brief This function solves the square equation
//! @return number of roots
//! @param [in] - a, b, c - coefficients of equation
//! @param [out] x1, x2 - roots of equation

int solve_quadratic (double a, double b, double c, double *x1, double *x2);

//! @brief This test checks functionality of the function in standard situation
//! @param [in] a,b,c - coefficients of equation
//! @param [in] x1_true, x2_true - roots that we know
//! @param [in] x1_end, x2_end - variables for roots
//! @return success status of test (1 if test is success and 0 if not)

int test_classic();

//! @brief This test checks functionality of the function when all coefficient variables equals zero
//! @param [in] a,b,c - coefficients of equation
//! @param [in] x1_end, x2_end - variables for roots
//! @return success status of test (1 if test is success and 0 if not)

int test_infinite();

//! @brief This test checks functionality of the function when a equals 0 and b,c is not
//! @param [in] a,b,c - coefficients of equation
//! @param [in] x1_end, x2_end - variables for roots
//! @param [in] x1_true - root that we know
//! @return success status of test (1 if test is success and 0 if not)

int test_a_zero_only();

//! @brief This test checks functionality of the function when a, b equals 0 and c is not
//! @param [in] a,b,c - coefficients of equation
//! @param [in] x1, x2 - variables for roots
//! @return success status of test (1 if test is success and 0 if not)

int test_ab_zero_cnot();

//! @brief This test checks functionality of the function with negative discriminant
//! @param [in] a,b,c - coefficients of equation
//! @param [in] x1, x2 - variables for roots
//! @return success status of test (1 if test is success and 0 if not)

int test_negative_discr();

//! @brief This function run all tests at once

int UnitTest();
