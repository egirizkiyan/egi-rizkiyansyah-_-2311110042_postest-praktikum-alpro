#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int number;
    std::cout << "Masukkan sebuah bilangan bulat: ";
    std::cin >> number;

    int result = factorial(number);
    std::cout << "Faktorial dari " << number << " adalah " << result << std::endl;

    return 0;
}
