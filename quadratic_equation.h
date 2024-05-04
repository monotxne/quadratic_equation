#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

// Structure to store the solutions of the quadratic equation
typedef struct {
    double root1;
    double root2;
    int root_count;
} Solution;

// Function to solve the quadratic equation
// Returns a pointer to the Solution structure, containing the roots of the equation and their count
// IMPORTANT: Remember to free the memory allocated for the Solution structure
Solution* solve_equation(double a, double b, double c);

#endif