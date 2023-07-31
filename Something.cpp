#include <iostream>

double equation(double x, double y, double z);

int main() {
    double target = 69;
    double epsilon = 1e-6;
    int loopCount = 0; 

    for (double x = -100; x <= 100; x += 0.1) {
        for (double y = -100; y <= 100; y += 0.1) {
            for (double z = -100; z <= 100; z += 0.1) {
                loopCount++; // Increment the loop counter.
                double result = equation(x, y, z);
                if (std::abs(result - target) < epsilon) {
                    std::cout << "Solution found: x = " << x << ", y = " << y << ", z = " << z << std::endl;
                    std::cout << "Loop iterations: " << loopCount << std::endl;
                    return 0; // Exit the program after finding the first solution.
                }
            }
        }
    }

    std::cout << "No solution found within the given range." << std::endl;
    return 0;
}