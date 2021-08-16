#include <iostream>

// calculator using switch

int main()
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    char operator_str;
    std::cout << "Enter an operator: ";
    std::cin >> operator_str;
    switch (operator_str)
    {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 * num2 << std::endl;
            break;
        case '/':
            std::cout << num1 / num2 << std::endl;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
    }
}