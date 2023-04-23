#include <iostream>

int main() {
    int s = 2046;
    for (int a = 1; a < s; a++)
        for (int b = a; b < s; b++) {
            if (((4 * a * b) == ((s - (a + b)) ^ 2))) {
                std::cout << "i: " << a << "\nj: " << b << "\n-----\n";
            }
        }
    return 0;
}