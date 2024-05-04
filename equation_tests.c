#include "quadratic_equation.h"

void test_solve_equation() {
    // Test case 1: Two roots
    {
        double a = 1.0, b = -3.0, c = 2.0;
        Solution* solution = solve_equation(a, b, c);
        assert(solution->root_count == 2);
        assert(solution->root1 == 2.0);
        assert(solution->root2 == 1.0);
        free(solution);
    }

    // Test case 2: One root
    {
        double a = 1.0, b = -2.0, c = 1.0;
        Solution* solution = solve_equation(a, b, c);
        assert(solution->root_count == 1);
        assert(solution->root1 == 1.0);
        free(solution);
    }

    // Test case 3: No roots
    {
        double a = 1.0, b = 0.0, c = 1.0;
        Solution* solution = solve_equation(a, b, c);
        assert(solution->root_count == 0);
        free(solution);
    }
}

int main() {
    test_solve_equation();
    printf("All tests passed!\n");
    return 0;
}