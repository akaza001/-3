#include <iostream>
using namespace std;

class Number {
public:
    int n;

    Number(int val) { 
        n = val; 
    }

    int getTens() {
        return (n / 10) % 10;
    }
};

int main() {
    int x;
    cout << "Введите число: ";
    cin >> x;

    Number num(x); 
    
    cout << "Цифра десятков: " << num.getTens() << endl;

    return 0;
}