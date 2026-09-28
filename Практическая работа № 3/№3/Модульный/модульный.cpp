#include <iostream>
using namespace std;

int getTens(int num) {
    return (num / 10) % 10;
}

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    
    cout << "Цифра десятков: " << getTens(n) << endl;
    
    return 0;
}