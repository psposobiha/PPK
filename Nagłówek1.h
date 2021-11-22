
#pragma once
#include <string>
#include <iostream>

int getInt(std::string napis);
int randMIN_MAX(const int min = 100, const int max = 200);
bool jestParzysta(const int liczba);
void zamien(int& x, int& y);
float dzielenie(const int x, const int y, bool& divByZero);
void fillTable(int tab[], int size);