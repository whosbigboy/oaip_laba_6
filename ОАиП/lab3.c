#include <stdio.h>
#include <Windows.h>
//������ 1
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, min, max;
	printf("������� ������ ����� = ");
	scanf_s("%i", &a);
	printf("������� ������ ����� = ");
	scanf_s("%i", &b);
	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	printf("������� ����� = %i\n",max);
	printf("������� ����� = %i\n", min);
}
*/
/*
//������ 2
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d, e,max;
	printf("������� 5 �����:");
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
	printf("\n����� ������� ����� �� ��������� ��� %i\n", max);
}
*/
//������ 3
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	printf("������� ����������� ������� = ");
	scanf_s("%i",&a);
	if (a < 18) {
		printf("\n�������\n");
	}
	if (a > 17 && a < 22) {
		printf("\n���������\n");
	}
	if (a > 21 && a < 26) {
		printf("\n�����\n");
	}
	if (a > 25) {
		printf("\n�����\n");
	}
}
*/
//������ 4
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, s, t;

	printf("���� ������ ������:\n1 - ���������\n2 - ����\n3 - ������\n������� ����� ������: ");
	scanf_s("%i",&n);
	printf("\n�������� ����� ����:\n1 - ����\n2 - �����\n3 - ����\n4 - �����\n������� ����� ������� ����: ");
	scanf_s("%i",&s);
	printf("\n������� �����������: ");
	scanf_s("%i",&t);
	//���������
	if (n == 1 && s == 1 && t < -15) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 1 && t>-16 && t<-8) {
		printf("\n�������\n");
	}
	if (n == 1 && s == 1 && t>-9 && t<0) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 1 && t >-1) {
		printf("\n�����\n");
	}
	if ((n == 1 && s == 2 && t >12) || (n == 1 && s == 4 && t > 12)) {
		printf("\n�����\n");
	}
	if ((n == 1 && s == 2 && t < 13 && t>5) || (n == 1 && s == 4 && t < 13 && t>5)) {
		printf("\n�����\n");
	}
	if ((n == 1 && s == 2 && t > -6 && t<6) || (n == 1 && s == 4 && t > -6 && t < 6)) {
		printf("\n���������\n");
	}
	if ((n == 1 && s == 2 && t < -5) || (n == 1 && s == 4 && t < -5)) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 3 && t > 24) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 3 && t <25 && t>15) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 3 && t < 16 && t>9) {
		printf("\n���������\n");
	}
	if (n == 1 && s == 3 &&t<10) {
		printf("\n�����\n");
	}
	//����
	if (n == 2 && s == 1 && t < 6) {
		printf("\n�����\n");
	}
	if (n == 2 && s == 1 && t > 5 && t < 10) {
		printf("\n�������\n");
	}
	if (n == 2 && s == 1 && t > 9 && t < 15) {
		printf("\n�����\n");
	}
	if (n == 2 && s == 1 && t > 14) {
		printf("\n�����\n");
	}
	if ((n == 2 && s == 2 && t > 25) || (n == 2 && s == 4 && t > 25)) {
		printf("\n�����\n");
	}
	if ((n == 2 && s == 2 && t < 26 && t>19) || (n == 2 && s == 4 && t < 26 && t>19)) {
		printf("\n�����\n");
	}
	if ((n == 2 && s == 2 && t > 14 && t < 20) || (n == 2 && s == 4 && t > 14 && t < 20)) {
		printf("\n���������\n");
	}
	if ((n == 2 && s == 2 && t < 15) || (n == 2 && s == 4 && t < 15)) {
		printf("\n�����\n");
	}
	if (n == 2 && s == 3 && t > 30) {
		printf("\n�����\n");
	}
	if (n == 2 && s == 3 && t < 31 && t>24) {
		printf("\n�����\n");
	}
	if (n == 2 && s == 3 && t < 25 && t>19) {
		printf("\n���������\n");
	}
	if (n == 2 && s == 3 && t < 20) {
		printf("\n�����\n");
	}
	//������
	if (n == 3 && s == 1 && t < -24) {
		printf("\n�����\n");
	}
	if (n == 3 && s == 1 && t > -25 && t < -15) {
		printf("\n�������\n");
	}
	if (n == 3 && s == 1 && t > -16 && t < -9) {
		printf("\n�����\n");
	}
	if (n == 3 && s == 1 && t > -10) {
		printf("\n�����\n");
	}
	if ((n == 3 && s == 2 && t > 5) || (n == 3 && s == 4 && t > 5)) {
		printf("\n�����\n");
	}
	if ((n == 3 && s == 2 && t <6 && t>-10) || (n == 3 && s == 4 && t < 6 && t>-10)) {
		printf("\n�����\n");
	}
	if ((n == 3 && s == 2 && t > -9 && t < -15) || (n == 3 && s == 4 && t > -9 && t < -15)) {
		printf("\n���������\n");
	}
	if ((n == 3 && s == 2 && t < -14) || (n == 3 && s == 4 && t < -14)) {
		printf("\n�����\n");
	}
	if (n == 3 && s == 3 && t > 19) {
		printf("\n�����\n");
	}
	if (n == 3 && s == 3 && t < 20 && t>10) {
		printf("\n�����\n");
	}
	if (n == 3 && s == 3 && t < 11 && t>4) {
		printf("\n���������\n");
	}
	if (n == 3 && s == 3 && t < 5) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 1 && t < -15) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 1 && t>-16 && t<-8) {
		printf("\n�������\n");
	}
	if (n == 1 && s == 1 && t>-9 && t<0) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 1 && t >-1) {
		printf("\n�����\n");
	}
	if ((n == 1 && s == 2 && t >12) || (n == 1 && s == 4 && t > 12)) {
		printf("\n�����\n");
	}
	if ((n == 1 && s == 2 && t < 13 && t>5) || (n == 1 && s == 4 && t < 13 && t>5)) {
		printf("\n�����\n");
	}
	if ((n == 1 && s == 2 && t > -6 && t<6) || (n == 1 && s == 4 && t > -6 && t < 6)) {
		printf("\n���������\n");
	}
	if ((n == 1 && s == 2 && t < -5) || (n == 1 && s == 4 && t < -5)) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 3 && t > 24) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 3 && t <25 && t>15) {
		printf("\n�����\n");
	}
	if (n == 1 && s == 3 && t < 16 && t>9) {
		printf("\n���������\n");
	}
	if (n == 1 && s == 3 &&t<10) {
		printf("\n�����\n");
	}
	if (n > 3 || n < 1) {
		printf("\n������:������ ������ ������ ���\n");
	}
	if (s > 4 || s < 1) {
		printf("\n������:������ ������ ������� ���� ���\n");
	}
}
*/
//������ 5
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int s;
	printf("�� ������ �������� �� ����� � ����� ���� �����, ��������� �� ���������\n\n������� ���-�� ����� = ");
	scanf_s("%i",&s);
	if (s==1 || s==2) {
		printf("\n����� ������\n");
	}
	if (s==3) {
		printf("\n���������\n");
	}
	if (s==4) {
		printf("\n������\n");
	}
	if (s == 5) {
		printf("\n���� ������\n");
	}
	if (s < 1) {
		printf("\n��������? ���� �� ������������, ����������\n");
	}
	if (s>5) {
		printf("\n����� ������ ������ ��� �� ���������\n");
	}
}
*/
//������ 6
/*
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int v;;
	printf("�� ����������� �� ����, ���������, ��� ������ �� �������\n\n������� ���� �������� = ");
	scanf_s("%f", &v);
	if (v < 5 && v>0) {
		printf("\n����� ��������\n");
	}
	if (v < 10 && v>4) {
		printf("\n��������\n");
	}
	if (v < 15 && v>9) {
		printf("\n������\n");
	}
	if (v < 20 && v>14) {
		printf("\n����� ������\n");
	}
	if (v < 1) {
		printf("\n������ ������� ����, ����������\n");
	}
	if (v >19) {
		printf("\n�� ����???\n");
	}
}
*/