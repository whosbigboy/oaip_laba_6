#include <stdio.h>
#include <Windows.h>
//Задача 1
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, min, max;
	printf("Введите первое число = ");
	scanf_s("%i", &a);
	printf("Введите второе число = ");
	scanf_s("%i", &b);
	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	printf("Большее число = %i\n",max);
	printf("Меньшее число = %i\n", min);
}
*/
/*
//Задача 2
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d, e,max;
	printf("Введите 5 чисел:");
	scanf_s("%i%i%i%i%i",&a,&b,&c,&d,&e);
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	if (e  > max) {
		max = e;
	}
	printf("\nСамое большое число из введенных это %i\n", max);
}
*/
//Задача 3
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("Введите температуры комнаты = ");
	scanf_s("%i",&a);
	if (a < 18) {
		printf("\nхолодно\n");
	}
	if (a > 17 && a < 22) {
		printf("\nпрохладно\n");
	}
	if (a > 21 && a < 26) {
		printf("\nтепло\n");
	}
	if (a > 25) {
		printf("\nжарко\n");
	}
}
*/
//Задача 4
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, s, t;

	printf("Меню выбора города:\n1 - Ульяновск\n2 - Сочи\n3 - Сургут\nВведите номер города: ");
	scanf_s("%i",&n);
	printf("\nВыберите время года:\n1 - Зима\n2 - Весна\n3 - Лето\n4 - Осень\nВведите номер времени года: ");
	scanf_s("%i",&s);
	printf("\nВведите температуру: ");
	scanf_s("%i",&t);
	//Ульяновск
	if (n == 1 && s == 1 && t < -15) {
		printf("\nМороз\n");
	}
	if (n == 1 && s == 1 && t>-16 && t<-8) {
		printf("\nХолодно\n");
	}
	if (n == 1 && s == 1 && t>-9 && t<0) {
		printf("\nТепло\n");
	}
	if (n == 1 && s == 1 && t >-1) {
		printf("\nЖарко\n");
	}
	if ((n == 1 && s == 2 && t >12) || (n == 1 && s == 4 && t > 12)) {
		printf("\nЖарко\n");
	}
	if ((n == 1 && s == 2 && t < 13 && t>5) || (n == 1 && s == 4 && t < 13 && t>5)) {
		printf("\nТепло\n");
	}
	if ((n == 1 && s == 2 && t > -6 && t<6) || (n == 1 && s == 4 && t > -6 && t < 6)) {
		printf("\nПрохладно\n");
	}
	if ((n == 1 && s == 2 && t < -5) || (n == 1 && s == 4 && t < -5)) {
		printf("\nМороз\n");
	}
	if (n == 1 && s == 3 && t > 24) {
		printf("\nЖарко\n");
	}
	if (n == 1 && s == 3 && t <25 && t>15) {
		printf("\nТепло\n");
	}
	if (n == 1 && s == 3 && t < 16 && t>9) {
		printf("\nПрохладно\n");
	}
	if (n == 1 && s == 3 &&t<10) {
		printf("\nМороз\n");
	}
	//Сочи
	if (n == 2 && s == 1 && t < 6) {
		printf("\nМороз\n");
	}
	if (n == 2 && s == 1 && t > 5 && t < 10) {
		printf("\nХолодно\n");
	}
	if (n == 2 && s == 1 && t > 9 && t < 15) {
		printf("\nТепло\n");
	}
	if (n == 2 && s == 1 && t > 14) {
		printf("\nЖарко\n");
	}
	if ((n == 2 && s == 2 && t > 25) || (n == 2 && s == 4 && t > 25)) {
		printf("\nЖарко\n");
	}
	if ((n == 2 && s == 2 && t < 26 && t>19) || (n == 2 && s == 4 && t < 26 && t>19)) {
		printf("\nТепло\n");
	}
	if ((n == 2 && s == 2 && t > 14 && t < 20) || (n == 2 && s == 4 && t > 14 && t < 20)) {
		printf("\nПрохладно\n");
	}
	if ((n == 2 && s == 2 && t < 15) || (n == 2 && s == 4 && t < 15)) {
		printf("\nМороз\n");
	}
	if (n == 2 && s == 3 && t > 30) {
		printf("\nЖарко\n");
	}
	if (n == 2 && s == 3 && t < 31 && t>24) {
		printf("\nТепло\n");
	}
	if (n == 2 && s == 3 && t < 25 && t>19) {
		printf("\nПрохладно\n");
	}
	if (n == 2 && s == 3 && t < 20) {
		printf("\nМороз\n");
	}
	//Сургут
	if (n == 3 && s == 1 && t < -24) {
		printf("\nМороз\n");
	}
	if (n == 3 && s == 1 && t > -25 && t < -15) {
		printf("\nХолодно\n");
	}
	if (n == 3 && s == 1 && t > -16 && t < -9) {
		printf("\nТепло\n");
	}
	if (n == 3 && s == 1 && t > -10) {
		printf("\nЖарко\n");
	}
	if ((n == 3 && s == 2 && t > 5) || (n == 3 && s == 4 && t > 5)) {
		printf("\nЖарко\n");
	}
	if ((n == 3 && s == 2 && t <6 && t>-10) || (n == 3 && s == 4 && t < 6 && t>-10)) {
		printf("\nТепло\n");
	}
	if ((n == 3 && s == 2 && t > -9 && t < -15) || (n == 3 && s == 4 && t > -9 && t < -15)) {
		printf("\nПрохладно\n");
	}
	if ((n == 3 && s == 2 && t < -14) || (n == 3 && s == 4 && t < -14)) {
		printf("\nМороз\n");
	}
	if (n == 3 && s == 3 && t > 19) {
		printf("\nЖарко\n");
	}
	if (n == 3 && s == 3 && t < 20 && t>10) {
		printf("\nТепло\n");
	}
	if (n == 3 && s == 3 && t < 11 && t>4) {
		printf("\nПрохладно\n");
	}
	if (n == 3 && s == 3 && t < 5) {
		printf("\nМороз\n");
	}
	if (n == 1 && s == 1 && t < -15) {
		printf("\nМороз\n");
	}
	if (n == 1 && s == 1 && t>-16 && t<-8) {
		printf("\nХолодно\n");
	}
	if (n == 1 && s == 1 && t>-9 && t<0) {
		printf("\nТепло\n");
	}
	if (n == 1 && s == 1 && t >-1) {
		printf("\nЖарко\n");
	}
	if ((n == 1 && s == 2 && t >12) || (n == 1 && s == 4 && t > 12)) {
		printf("\nЖарко\n");
	}
	if ((n == 1 && s == 2 && t < 13 && t>5) || (n == 1 && s == 4 && t < 13 && t>5)) {
		printf("\nТепло\n");
	}
	if ((n == 1 && s == 2 && t > -6 && t<6) || (n == 1 && s == 4 && t > -6 && t < 6)) {
		printf("\nПрохладно\n");
	}
	if ((n == 1 && s == 2 && t < -5) || (n == 1 && s == 4 && t < -5)) {
		printf("\nМороз\n");
	}
	if (n == 1 && s == 3 && t > 24) {
		printf("\nЖарко\n");
	}
	if (n == 1 && s == 3 && t <25 && t>15) {
		printf("\nТепло\n");
	}
	if (n == 1 && s == 3 && t < 16 && t>9) {
		printf("\nПрохладно\n");
	}
	if (n == 1 && s == 3 &&t<10) {
		printf("\nМороз\n");
	}
	if (n > 3 || n < 1) {
		printf("\nОшибка:Такого номера города нет\n");
	}
	if (s > 4 || s < 1) {
		printf("\nОшибка:Такого номера времени года нет\n");
	}
}
*/
//Задача 5
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int s;
	printf("Вы решили съездить на отдых и ищите себе отель, определим их стоимость\n\nВведите кол-во звезд = ");
	scanf_s("%i",&s);
	if (s==1 || s==2) {
		printf("\nОчень дешево\n");
	}
	if (s==3) {
		printf("\nНормально\n");
	}
	if (s==4) {
		printf("\nДорого\n");
	}
	if (s == 5) {
		printf("\nУжас дорого\n");
	}
	if (s < 1) {
		printf("\nСерьезно? Даже не рассматривай, пожалуйста\n");
	}
	if (s>5) {
		printf("\nТаких крутых отелей еще не построили\n");
	}
}
*/
//Задача 6
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int v;;
	printf("Вы опаздываете на пары, определим, как быстро вы придете\n\nВведите вашу скорость = ");
	scanf_s("%f", &v);
	if (v < 5 && v>0) {
		printf("\nОчень медленно\n");
	}
	if (v < 10 && v>4) {
		printf("\nМедленно\n");
	}
	if (v < 15 && v>9) {
		printf("\nБыстро\n");
	}
	if (v < 20 && v>14) {
		printf("\nОчень быстро\n");
	}
	if (v < 1) {
		printf("\nУлитка быстрее тебя, поторопись\n");
	}
	if (v >19) {
		printf("\nТы флеш???\n");
	}
}
*/