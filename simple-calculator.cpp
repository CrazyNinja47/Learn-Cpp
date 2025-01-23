#include <iostream>


int main() {

    int x, y;

    char op;

    std::cout << "Input an expression such as 5 + 2:\n";

    std::cin >> x >> op >> y;


    switch(op) {
        case '*':
            std::cout << (x * y);
            break;
        case '+':
            std::cout << (x + y);
            break;
        case '-':
            std::cout << (x - y);
            break;
        case '/':
            if (y != 0) {
                std::cout << (x / y);
            } else {
                std::cout << "Division by Zero";
            }
            break;
        default:
            std::cout << "Invalid Operator";
    }

    
    return 0;

}