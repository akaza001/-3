#include <iostream>
#include "tens.cpp"

using namespace std;

int main() {
    int n;
    cout << "Введи число: ";
    cin >> n;
    
    int tens = getTens(n);
    
    cout << "Цифра десятков: " << tens << endl;
    
    return 0;
}