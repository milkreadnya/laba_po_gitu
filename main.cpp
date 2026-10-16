#include <iostream>

void printDifference(int x, int y) {
        std::cout << "Разность " << x - y;
}

void printProduct(int x, int y) {
        std::cout << "Произведение " << x * y;
}

int main() {
        std::cout << "Hello Git!";
        int a, b;
        std::cout << "Введите два целых числа:";
        std::cin >> a >> b;
        std::cout << "Вы ввели " << a << ' ' << b;
        std::cout << "Разность " << a - b;
        printDifference(a, b);
        printProduct(a, b);
        return 0;
}