#include <stdio.h>
#include <math.h>
#include <Windows.h>

;/*
 //������ 1
 void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h = 12.0;
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("������� ������ � ������ %f ������\n", h);
	printf("�� �������� ����� ����� %f ������\n", t);
}
*/
/*
//������ 2
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h;
	printf("������� ������ � ������=");
	scanf_s("%f", &h);

	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("������� ������ � ������ %f ������\n", h);
	printf("�� �������� ����� ����� %f ������\n", t);
}
*/
//������ 3
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;

	printf("������� ������� �������� m*m=");
	scanf_s("%f", &m);

	printf("������� ��������� 1 ����������� ����� �������� RUB=");
	scanf_s("%i", &rub_m);

	float price = m * rub_m;

	printf("�������� �������� %f m*m �� ���� %i RUB/(m*m) ����� <%10.1f> RUB\n", m, rub_m, price);
}
*/
//������ 4
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;
	int zp;

	printf("������� ������� �������� m*m=");
	scanf_s("%f", &m);

	printf("������� ��������� 1 ����������� ����� �������� RUB=");
	scanf_s("%i", &rub_m);

	printf("������� ������ ����������=");
	scanf_s("%i", &zp);

	float price = m * rub_m;
	printf("�������� �������� %f m*m �� ���� %i RUB/(m*m) ����� <%10.1f> RUB\n", m, rub_m, price);

	int time = price / (zp*0.5);
	printf("��� �������� %i RUB �� ��� �������� ����� ������  % i �������",zp,time);
}
*/
//������ 5
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a,b;
	printf("������ ���������� � ������������� ������������, ���� ��� ������\n");
	printf("������� ����� ������� ������=");
	scanf_s("%i", &a);
	printf("������� ����� ������� ������=");
	scanf_s("%i", &b);
	float c = sqrt(a*a+b*b);
	printf("���������� ����� ����� %f", c);
}
*/
/*
//������ 6
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float k, f;
	printf("������ �� ������� ����������� ����������� �������, ���� ��������� ������� � � ����� ����� �� ��� �����������\n");
	printf("������� ��������� �������=");
	scanf_s("%i",&k);
	printf("������� ����=");
	scanf_s("%i",&f);
	float x = (f / k) * 100;
	printf("��������� ������� ����� ����� %f ��",x);
}
*/
//������ 7
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float k1,c1,k2,c2;
	printf("��������� � ����� �������� ����� �������� ������\n");
	printf("������� ���-�� ������ � �������� � ������ ��������=");
	scanf_s("%f", &k1);
	printf("������� ���� �� �������� �� ������ ��������=");
	scanf_s("%f",&c1);
	printf("������� ���-�� ������ � �������� � ������ ��������=");
	scanf_s("%f", &k2);
	printf("������� ���� �� �������� �� ������ ��������=");
	scanf_s("%f", &c2);
	float v1 = c1 / k1;
	float v2 = c2 / k2;
	if (v1<v2) {
		printf("�������� ����� ������ �� ������ ��������, ��� ��� ���� �� ���� ������ ����� ����� %f ���" ,v1);
	} else {
		printf("�������� ����� ������ �� ������ ��������, ��� ��� ���� �� ���� ������ ����� ����� %f ���",v2);
	}

}
*/













