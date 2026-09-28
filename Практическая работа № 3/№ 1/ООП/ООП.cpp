#include <iostream>
#include <cmath>

struct Triangle {
    double a; 
    double b; 

    double getHypotenuse() const {
        return std::sqrt(a * a + b * b);
    }
};

int main() {
    double a, b;
    
    std::cout << "Введите катет a: ";
    std::cin >> a;
    std::cout << "Введите катет b: ";
    std::cin >> b;
    
    Triangle t = {a, b}; 
    
    std::cout << "Гипотенуза равна: " << t.getHypotenuse() << std::endl;
    
    return 0;
}