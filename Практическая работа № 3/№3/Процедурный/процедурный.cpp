#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введи число: ";
    cin >> n;
    
    int tens = (n / 10) % 10; 
    
    cout << "Цифра десятков: " << tens << endl;
    
    return 0;
}