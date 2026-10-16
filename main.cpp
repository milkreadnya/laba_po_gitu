#include <iostream>

<<<<<<< HEAD
void printDifference(int x, int y) {
        std::cout << "Разность " << x - y;
=======
void printDifference(int x, int y) {
        std::cout << "Разность " << x - y;
>>>>>>> 257517f (Add printProduct function)
}

int main() {
<<<<<<< HEAD
	std::cout << "Hello Git!";
	int a, b;
	std::cout << "Введите два целых числа:";
	std::cin >> a >> b;
	std::cout << "Вы ввели " << a << ' ' << b;
	std::cout << "Разность " << a - b;
	printDifference(a, b);
	return 0;
=======
        std::cout << "Hello Git!";
        int a, b;
        std::cout << "Введите два целых числа:";
        std::cin >> a >> b;
        std::cout << "Вы ввели " << a << ' ' << b;
        std::cout << "Разность " << a - b;
	printDifference(a, b);
        return 0;
>>>>>>> zadanie9a
}
