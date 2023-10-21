#include <stdio.h>
#include <Windows.h>

void Task1() {
	printf("Task1() START\n\n");
	int n, m;
	printf("n=");
	scanf_s("%i", &n);
	printf("m=");
	scanf_s("%i",&m);
	printf("\n");
	int i = 1;
	do {
		int f = 1;
		do {
			int g = 10 * i + f;
			printf("%i ", g);
			f++;
		} while (f <= m);
		printf("\n");
		i++;
	} while (i <= n);
	printf("\nTask1() FINISH\n\n");
}

void Task2() {
	printf("Task2() START\n\n");
	int i = 1;
	do {
		int f = 1;
		do {
			int g = i*f;
			printf(" %2i", g);
			f++;
		} while (f <= 10);
		printf("\n");
		i++;
	} while (i <= 10);
	printf("\nTask2() FINISH\n\n");
}

void Task3() {
	printf("Task3() START\n\n");
	int n = 5;
	do {
		int f = 1;
		do {
			printf("%i ", f);
			f++;
		} while (f<= n);
		printf("\n");
		n--;;
	} while (n>0);
	printf("\nTask3() FINISH\n\n");
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	do {
		printf("\nВыберите нужную вам операцию:\n\n");
		printf("1:Задача1 (i*10+j)\n");
		printf("2:Задача2 (Таблица Пифагора)\n");
		printf("3:Задача3 (Рисунок по варианту)\n\n");
		printf("0:Выйти из программы\n\n");

		scanf_s("%d", &n);
		switch (n) {
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;
		}
	} while (n != 0);
}
