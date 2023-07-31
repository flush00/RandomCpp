#include <cmath>


double equation(double x, double y, double z) {
    return ((pow(x, 3) + 2 * y) * (4 * z + 5)) / (x * y + z) - cbrt(pow(x, 2) - 2 * pow(y, 2) + pow(z, 2));
}