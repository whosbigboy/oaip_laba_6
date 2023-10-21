#include <stdio.h>
#include <Windows.h>

void print1_10() {
	int a = 1;
	do {
		printf("%d ", a);
		a += 1;
	} while (a <= 10);
}

void print10_1() {
	int a = 10;
	do {
		printf("%d ", a);
		a -= 1;
	} while (a >= 1);
}

void print5Odds() {
	int a = 1;
	int i = 1;
	do{
		printf("%d ", a);
		a += 2;
		i += 1;
	} while (i <= 5);
}

void print100_10_while() {
	int a = 100;
	while (a >= 10) {
		printf("%d ", a);
		a -= 10;
	}
}

void print1000_100_while() {
	int a = 1000;
	while (a >= 100) {
		printf("%d ", a);
		a -= 100;
	}
}

void print1000_0_while() {
	int a = 1000;
	while (a >= 0) {
		printf("%d ", a);
		a -= 31;
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n\nВыберите нужную вам операцию:\n");
		printf("1:Вывести числа от 1 до 10\n");
		printf("2:Вывести числа от 10 до 1\n");
		printf("3:Вывести 5 первых нечетных чисел, начиная с 1\n");
		printf("11:Вывести все числа от 100 до 10\n");
		printf("12:Вывести все числа от 1000 до 100\n");
		printf("20:Вывести все числа от 1000 до 0 с шагом 31\n");
		printf("0:Выйти из программы\n\n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print5Odds();
			break;
		case 11:
			print100_10_while();
			break;
		case 12:
			print1000_100_while();
			break;
		case 20:
			print1000_0_while();
			break;
		}

	} while (n != 0);
}