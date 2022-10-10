#pragma once
#include <stdio.h>;
#include <locale.h>
#include <malloc.h>

void f_1()
{
	printf("Сколько вам лет?\n");
	int n[1];
	scanf_s("%d", n);

}

int summ(int x, int y)
{
	printf("\n");
	printf("Сумма: %d", x + y);
	return x + y;
}

int razn(int x, int y)
{
	printf("\n");
	printf("Разность: %d", x - y);
	return x - y;
}

int umn(int x, int y)
{
	printf("\n");
	printf("Умножение: %d", x * y);
	return x * y;
}

int del(int x, int y)
{
	printf("\n");
	printf("Деление: %d", x / y);
	return x / y;
	printf("\n");
}

void func()
{
	printf("\n");
	char a[8] = "Hello, ";
	char n[7] = "World!";
	strncat(a, n);
	printf("% s\n", a);
}

void metod()
{
	int h = 25489;
	printf("Число: %d\n", h);
	char v[5] = (char)h;
	printf("Строка: %s\n", v);

	char* k = "56892";
	printf("Строка: %s\n", k);
	printf("\n");
	int b = (int)&k;
	printf("Число: %d\n", b);

}