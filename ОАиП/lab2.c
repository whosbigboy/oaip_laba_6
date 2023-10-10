#include <stdio.h>
#include <math.h>
#include <Windows.h>

;/*
 //Задача 1
 void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h = 12.0;
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
}
*/
/*
//Задача 2
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h;
	printf("Введите высоту в метрах=");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснется земли через %f секунд\n", t);
}
*/
//Задача 3
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;

	printf("Введите площадь квартиры m*m=");
	scanf_s("%f", &m);

	printf("Введите стоимость 1 квадратного метра квартиры RUB=");
	scanf_s("%i", &rub_m);

	float price = m * rub_m;

	printf("Квартира площадью %f m*m по цене %i RUB/(m*m) стоит <%10.1f> RUB\n", m, rub_m, price);
}
*/
//Задача 4
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;
	int zp;

	printf("Введите площадь квартиры m*m=");
	scanf_s("%f", &m);

	printf("Введите стоимость 1 квадратного метра квартиры RUB=");
	scanf_s("%i", &rub_m);

	printf("Введите размер заррпалаты=");
	scanf_s("%i", &zp);

	float price = m * rub_m;
	printf("Квартира площадью %f m*m по цене %i RUB/(m*m) стоит <%10.1f> RUB\n", m, rub_m, price);

	int time = price / (zp*0.5);
	printf("При зарплате %i RUB на эту квартиру нужно копить  % i месяцев",zp,time);
}
*/
//Задача 5
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a,b;
	printf("Найдем гипотенузу в прямоугольном треугольнике, зная два катета\n");
	printf("Введите длину первого катета=");
	scanf_s("%i", &a);
	printf("Введите длину второго катета=");
	scanf_s("%i", &b);
	float c = sqrt(a*a+b*b);
	printf("Гипотенуза будет равна %f", c);
}
*/
/*
//Задача 6
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float k, f;
	printf("Найдем на сколько сантиметров расстянется пружина, зная жесткость пружины и с какой силой на нее действовали\n");
	printf("Введите жесткость пружины=");
	scanf_s("%i",&k);
	printf("Введите силу=");
	scanf_s("%i",&f);
	float x = (f / k) * 100;
	printf("Удлинение пружины будет равна %f см",x);
}
*/
//Задача 7
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float k1,c1,k2,c2;
	printf("Определим у какой компании лучше закупать плитки\n");
	printf("Введите кол-во плиток в упаковке у первой компании=");
	scanf_s("%f", &k1);
	printf("Введите цену за упаковку от первой компании=");
	scanf_s("%f",&c1);
	printf("Введите кол-во плиток в упаковке у второй компании=");
	scanf_s("%f", &k2);
	printf("Введите цену за упаковку от второй компании=");
	scanf_s("%f", &c2);
	float v1 = c1 / k1;
	float v2 = c2 / k2;
	if (v1<v2) {
		printf("Выгоднее брать плитки от первой компании, так как цена за одну плитку будет равна %f руб" ,v1);
	} else {
		printf("Выгоднее брать плитки от второй компании, так как цена за одну плитку будет равна %f руб",v2);
	}

}
*/













