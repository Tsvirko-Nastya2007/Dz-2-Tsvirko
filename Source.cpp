﻿#include<iostream>
using namespace std;
int main()
{
	/*Boolean16◦ Дано целое положительное число. Проверить истинность высказывания:
	«Данное число является четным двузначным».*/
	/*int a;
	bool b;
	cin >> a;
	b = a % 2 == 0 && a > 9 && a < 100;
	cout << boolalpha << b;*/
	//
	/*Boolean17◦ Дано целое положительное число. Проверить истинность высказывания:
	«Данное число является нечетным трехзначным».*/
	/*int a;
	bool b;
	cin >> a;
	b = a % 2 != 0 && a > 100 && a < 1000;
	cout << boolalpha << b;*/
	//
	/*Boolean21◦ Дано трехзначное число. Проверить истинность высказывания:
	«Цифры данного числа образуют возрастающую последовательность».*/
	/*int a, b, c, d;
	bool e;
	cin >> a;
	b = a % 10;
	c = (a % 100 - a % 10) / 10;
	d = (a - a % 100) / 100;
	e = d < c && c < b;
	cout << boolalpha << e;*/
	//
	/*Boolean25◦ Даны числа x, y. Проверить истинность высказывания:
	«Точка с координатами (x, y) лежит во второй координатной четверти».*/
	/*int x, y;
	bool z;
	cin >> x >> y;
	z = x < 0 && y > 0;
	cout << boolalpha << z;*/
	//
	/*Boolean29◦ Даны числа x, y, x1, y1, x2, y2. Проверить истинность высказывания:
	«Точка с координатами (x, y) лежит внутри прямоугольника, левая верхняя вершина
	которого имеет координаты (x1, y1), правая нижняя (x2, y2), а стороны параллельны 
	координатным осям».*/
	int x, y, x1, y1, x2, y2;
	bool z;
	cout << "enter X and Y: " << endl;
	cin >> x >> y;
	cout << "enter X1 and Y1: " << endl;
	cin >> x1 >> y1;
	cout << "enter X2 and Y2: " << endl;
	cin >> x2 >> y2;
	z = x1 < x && x < x2 && y2 < y && y < y1;
	cout << boolalpha << z;
	return 0;
}