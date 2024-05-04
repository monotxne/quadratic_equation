#include "quadratic_equation.h"

Solution* solve_equation(double a, double b, double c) {
    Solution* solution = (Solution*) malloc(sizeof(Solution));
    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0) {
        solution->root1 = (-b + sqrt(discriminant)) / (2 * a);
        solution->root2 = (-b - sqrt(discriminant)) / (2 * a);
        solution->root_count = 2;
    } else if (discriminant == 0) {
        solution->root1 = -b / (2 * a);
        solution->root_count = 1;
    } else {
        solution->root_count = 0;
    }

    return solution;
}