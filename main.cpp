#include <iostream>

<<<<<<< HEAD
void printProduct(int x, int y) {
        std::cout << "Произведение " << x * y;
=======
void printProduct(int x, int y) {
        std::cout << "Произведение " << x * y;
>>>>>>> 257517f (Add printProduct function)
}

int main() {
<<<<<<< HEAD
	std::cout << "Hello Git!";
	int a, b;
	std::cout << "Введите два целых числа:";
	std::cin >> a >> b;
	std::cout << "Вы ввели " << a << ' ' << b;
<<<<<<< HEAD
	std::cout << "Разность " << a - b;
	printProduct(a, b);
=======
	std::cout << "Разность " << a - b;
	printProduct(a, b);
>>>>>>> aa5d1dc (Call printProduct in main)
	return 0;
=======
        std::cout << "Hello Git!";
        int a, b;
        std::cout << "Введите два целых числа:";
        std::cin >> a >> b;
        std::cout << "Вы ввели " << a << ' ' << b;
        std::cout << "Разность " << a - b;
	printProduct(a, b);
        return 0;
>>>>>>> zadanie9a
