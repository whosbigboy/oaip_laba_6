// Лаба 6
#include <stdio.h>

//задача 1
/*
void main() {
	int i, n;
	printf("n = ");
	scanf_s("%i",&n);
	i = 1;
	do {
		printf("%d ",i);
		i += 1;
	} while (i <= n);
}
*/
//Задача 2
/*
void main() {
	int i = 0;
	int s = 1;

	do {
		printf("2^%i = %i\n", i, s);
		i += 1;
		s *= 2;
	} while (i <= 5);
}
*/
//Задача 3*
/*
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int s;
	float p;
	printf("сумма вклада равна = ");
	scanf_s("%i",&s);
	printf("процент равен = ");
	scanf_s("%f", &p);

	int y = 0;
	do {
		printf("%i RUB in %i year\n",s,y);
		s = (s * (100 + p)) / 100;
		y += 1;
	} while (y<=10);
}
*/
//Задача 4
/*
void main() {

	int n;
	scanf_s("%i",&n);
	int a = 0;
	printf("\n");
	do {
		printf("%i\n",a);
		a += 2;
		n -= 1;
	} while (n > 0);
}
*/
//Задача 5
/*
void main() {
	int n, a,a1;
	scanf_s("%i", &n);
	scanf_s("%i", &a);
	printf("\n");
	a1 = a;
	do {
		printf("%i\n",a);
		a += a1;
		n -= 1;
	} while (n > 0);
}
*/
//Задача 6
/*
void main() {

	int n;
	scanf_s("%i",&n);
	int a = 1;
	printf("\n");
	do {
		printf("%i\n",a);
		a += 2;
		n -= 1;
	} while (n > 0);
}
*/