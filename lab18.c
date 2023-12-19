#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Zadacha 1
	/*printf("Барышев Дмитрий\nЛР 18\nЗадача 1\n");
	int a, b, c, p;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("Вели: %d, %d, %d\n", a, b, c);
	p = a * b * c;
	printf("p = %d", p);*/

	//Zadacha 2
	/*printf("Барышев Дмитрий\nЛР 18\nЗадача 2\n");
	FILE* fin;
	int a, b, c, p;
	fin = fopen("C:\\OneDriveTemp\\oaip1.txt", "rt");
	if (fin == NULL) {
		printf("File oaip1 is not found");
		return;
	}
	fscanf(fin, "%d%d%d", &a, &b, &c);
	fclose(fin);

	printf("Вели: %d, %d, %d\n", a, b, c);
	p = a*b*c;
	printf("p = %d", p);

	FILE* fout = fopen("C:\\OneDriveTemp\\oaip2.txt", "wt");
	if (fout == NULL) {
		printf("File oaip2 cannot be created");
		return;
	}
	fprintf(fout,"p=%d",p);
	fclose(fout);*/

	//Zadacha 3
	/*printf("Барышев Дмитрий\nЛР 18\nЗадача 3\n");
	int a, b, c,d,e, s;
	scanf_s("%d%d%d%d%d", &a, &b, &c,&d,&e);
	printf("Вели: %d, %d, %d, %d, %d\n", a, b, c,d,e);
	s = a + b + c+d+e;
	printf("s = %d", s);*/

	//Zadacha 4
	/*printf("Барышев Дмитрий\nЛР 18\nЗадача 4\n");
	FILE* fin;
	int a, b, c, d, e, s;
	fin = fopen("C:\\OneDriveTemp\\oaip1.txt", "rt");
	if (fin == NULL) {
		printf("File oaip1 is not found");
		return;
	}
	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	fclose(fin);

	printf("Вели: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	s = a+b+c+d+e;
	printf("s = %d", s);

	FILE* fout = fopen("printf("Барышев Дмитрий\nЛР 18\nЗадача 4\n"););
	if (fout == NULL) {
		printf("File oaip2 cannot be created");
		return;
	}
	fprintf(fout,"s=%d",s);
	fclose(fout);*/

	//Zadacha 5
	/*printf("Барышев Дмитрий\nЛР 18\nЗадача 5\n");
	int a[10];
	int n, i;

	FILE* fin = fopen("C:\\OneDriveTemp\\oaip3.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("Ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	int s = 0;
	for (i = 0; i < n; i++) {
		s += a[i];
	}

	float sa = (float)s / n;
	printf("\nsa = %f\n", sa);

	for (i = 0; i < n; i++) {
		if (a[i] > sa) {
			a[i] *= 10;
		}
	}
	printf("Получили массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	FILE* fout;
	fout = fopen("C:\\OneDriveTemp\\oaip4.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	fprintf(fout, "%d\n", a[i]);

	for (i = 0; i < n; i++) {
		fprintf(fout,"%d", a[i]);
	}
	fclose(fout);

	printf("\n");*/

	//Zadacha 6
	/*printf("Барышев Дмитрий\nЛР 18\nЗадача 6\n");
	int a[10];
	int n, i;

	FILE* fin = fopen("C:\\OneDriveTemp\\oaip3.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("Ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	int s = 0;
	for (i = 0; i < n; i++) {
		s += a[i];
	}

	float sa = (float)s / n;
	printf("\nsa = %f\n", sa);

	for (i = 0; i < n; i++) {
		if ((i%2==1)&&(a[i] < sa)) {
			a[i] = a[i]/2;
		}
	}
	printf("Получили массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	FILE* fout;
	fout = fopen("C:\\OneDriveTemp\\oaip4.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	fprintf(fout, "%d\n", a[i]);

	for (i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);

	printf("\n");*/

	

}