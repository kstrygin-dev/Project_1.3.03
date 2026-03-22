#include <iostream>
#include <windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int age;
	std::string pol = ("М", "Ж");
	std::string zodiac = ("Овен", "Телец", "Близнецы", "Лев", "Дева", "Весы", "Стрелец", "Козерог", "Водолей", "Рак", "Скорпион", "Рыбы");
	
	std::cout << "Введите пол: ";
	std::cin >> pol;
	std::cout << "Введите знак зодиака: ";
	std::cin >> zodiac;
	std::cout << "Введите возраст: ";
	std::cin >> age;

	bool waterzod = (zodiac == "Рак") || (zodiac == "Скорпион") || (zodiac == "Рыбы");
	bool earthzod = (zodiac == "Телец") || (zodiac == "Дева") || (zodiac == "Козерог");


	if (pol == "М" && age < 40 && waterzod) {
		std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
	}
		else if (pol == "Ж" && 15 <= age <= 30 && earthzod) {
			std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок."
				"Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.";
		}
		else {
		std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
		}

	return EXIT_SUCCESS;
}
