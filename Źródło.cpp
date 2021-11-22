#include <iostream>
#include <string>
#include <math.h>
#include "Nag³ówek1.h"



int main()
{
	 

	srand((unsigned)time(NULL));

	// for (int i = 0; i < 50; i++) {
	//	std::cout << randMIN_MAX(1,10) << std::endl;
	//}

	//5

	//int min = getInt("Podaj min: ");
	//int max = getInt("Podaj max: ");

	//std::cout << randMIN_MAX(min, max);

	//6
	//std::cout << jestParzysta(5) << std::endl;
	//std::cout << jestParzysta(2) << std::endl;

	//7
	//int l1 = 6, l2 = 10;
	//std::cout << l1 << " " << l2 << std::endl;
	//zamien(l1, l2);
	//std::cout << l1 << " " << l2 << std::endl;

	//8
	//bool divZero = false;
	//float wynik;
	//int x = 5, y = 2;
	//wynik = dzielenie(x, y, divZero);
	//if (!divZero)
	//{
	//	std::cout << wynik;
	//}

	//9
	int tab[20];
	fillTable(tab, 50);

	for (int element : tab) {
		std::cout << element << " ";
	}



}


int getInt(const std::string napis = "Podaj liczbê") {

	int wartosc;

	std::cout << napis;
	std::cin >> wartosc;

	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "Error! " << std::endl << napis;
		std::cin >> wartosc;
	}


	return wartosc;

}

int randMIN_MAX(const int min, const int max) {
	return (rand() % max) + min;
}

bool jestParzysta(const int liczba) {
	return (liczba % 2) ? false : true;
}

void zamien(int& x, int& y) {
	int cache = x;
	x = y;
	y = cache;
}

float dzielenie(const int x, const int y, bool& divByZero) {
	if (y == 0) {
		divByZero = true;
		return 0;
	}
	else {
		divByZero = false;
		return (float)x / y;
	}
}

void fillTable(int tab[], int size)
{
	for (int i = 0; i < size; i++) {
		tab[i] = randMIN_MAX();
	}
}
