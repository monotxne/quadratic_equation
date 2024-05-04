# This Makefile is used to compile and test the quadratic equation program
CC = gcc
CFLAGS = -Wall -Wextra -Werror 

# Default target that will be built when make is called without arguments
all: equation_tests

quadratic_equation.o: quadratic_equation.c quadratic_equation.h
	$(CC) -c quadratic_equation.c $(CFLAGS)

equation_tests.o: equation_tests.c quadratic_equation.h
	$(CC) -c equation_tests.c $(CFLAGS)

equation_tests: equation_tests.o quadratic_equation.o
	$(CC) -o equation_tests equation_tests.o quadratic_equation.o -lm $(CFLAGS)

# Rule to run the equation_tests
check: equation_tests
	./equation_tests

# Rule to clean the build directory
clean:
	rm -rf *.o equation_tests

# Rule to rebuild the project
rebuild: clean all
