#include <iostream>
#include <cmath>

int main() {
    double a, b;
    
    std::cout << "Введите катет a: ";
    std::cin >> a;
    std::cout << "Введите катет b: ";
    std::cin >> b;

    double c = std::sqrt(a * a + b * b);
    std::cout << "Гипотенуза равна: " << c << std::endl;
    
    return 0;
}


