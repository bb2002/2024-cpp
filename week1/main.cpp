#include <iostream>

int div2(int a, int b);
int mul2(int a, int b);
int sub2(int a, int b);
int sum2(int a, int b);

int main() {
    int numA = 0;
    int numB = 0;
    std::cout << "A: ";
    std::cin >> numA;

    std::cout << "B: ";
    std::cin >> numB;

    std::cout << numA << " + " << numB << " = " << sum2(numA, numB) << std::endl;
    std::cout << numA << " - " << numB << " = " << sub2(numA, numB) << std::endl;
    std::cout << numA << " * " << numB << " = " << mul2(numA, numB) << std::endl;
    std::cout << numA << " / " << numB << " = " << div2(numA, numB) << std::endl;
}