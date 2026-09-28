#include <iostream>
#include <cmath>

double f(double leg1, double leg2) {
    return std::sqrt(leg1 * leg1 + leg2 * leg2);
}

int main() {
    double a, b;
    
    std::cout << "Введите катет a: ";
    std::cin >> a;
    std::cout << "Введите катет b: ";
    std::cin >> b;
    
    double c = f(a, b);
    
    std::cout << "Гипотенуза равна: " << c << std::endl;
    
    return 0;
}