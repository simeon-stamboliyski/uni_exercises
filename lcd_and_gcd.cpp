#include <iostream>

int gcd(int a, int b) { 

    while (a > 0 && b > 0) {
        int r = 0;
        r = a % b;
        a = b;
        b = r;
    }

    return a;
} 

int lcd(int a, int b) {
    int gcd_ = gcd(a, b);

    int lcd_ = (a * b) / gcd_;

    return lcd_;
}

int main() {
    int a, b;

    std::cin >> a >> b;
    
    while (a < 0 || b < 0) {
        std::cin >> a >> b;
    }

    std::cout << "GCD:" << gcd(a, b) << "LCD:" << lcd(a, b) << std::endl; 
}