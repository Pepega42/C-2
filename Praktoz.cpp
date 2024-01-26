#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int a;
	int b, c;
	cout << "выберите задачу: \n 1 - сложение \n 2 -вычитание \n 3 - умножение \n 4 - деление \n 5 - возведение в степень \n 6 - квадратный корень \n 7 - нахождение 1 процента от числа \n 8 - факториал числа \n 9 - выход из программы" << endl;
	cin >> a;
	if (a == 1) {
		cout << "Введите числа для сложения ";
		cin >> b >> c;
		int sum = b + c;
		cout << "Сумма равна " << sum << endl;
		return 0;
	}
	else if (a == 2) {
		cout << "Введите числа для вычитания ";
		cin >> b >> c;
		int vich = b - c;
		cout << "Разность равна " << vich << endl;
		return 0;
	}
	else if (a == 3) {
		cout << "Введите числа для умножения ";
		cin >> b >> c;
		int umn = b * c;
		cout << "Умножение равно " << umn << endl;
		return 0;
	}
	else if (a == 4) {
		cout << "Введите числа для деление ";
		cin >> b >> c;
		int del = b / c;
		cout << "Деление равно " << del << endl;
		return 0;
	}
	else if (a == 5) {
		cout << "Введите число и степень его ";
		cin >> b >> c;
		int n, i;
		n = b;
		for (i = 1; i < c; i++) {
			n = n * b;
		}
		cout << "Ваше число в степени равно " << n << endl;
		return 0;
	}
	else if (a == 6) {
		cout << "Введите число для корня ";
		cin >> b;
		int kor;
		kor = sqrt(b);
		cout << "Корень числа равен " << kor << endl;
		return 0;
	}
	else if (a == 7) {
		float d;
		cout << "Введите число ";
		cin >> d;
		d = d / 100;
		cout << "1 процент от числа равен " << d << endl;
		return 0;
	}
	else if (a == 8) {
		cout << "Введите число ";
		cin >> b;
		int n, i;
		n = 1;
		for (i = 1; i = b; i++) {
			n = n * b;
			b = b - 1;
		}
		cout << "Факториал числа равен " << n << endl;
	}
	else if (a == 9) {
		return 0;
	}
}