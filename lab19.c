#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int a[1000];
int n;
//Zadacha1
/*void Load() {

	FILE* fin = fopen("C:\\OneDriveTemp\\in1.txt", "rt");

	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}

	fclose(fin);

}

void SaveResult() {
	
	float sa = 0;
	float s = 0;

	for (int i = 0; i < n; i++) {
		s += a[i];
	}

	sa = s / n;

	int m = 0;
	
	for (int i = 0; i < n; i++) {
		if (a[i] > sa) {
			m++;
		}
	}

	FILE* fout = fopen("C:\\OneDriveTemp\\out1.txt", "wt");

	if (fout == NULL) {
		printf("Выходной файл не найден");
		return;
	}

	fprintf(fout, "%d\n", m);

	for (int i = 0; i < n; i++) {
		if (a[i] > sa) {
			fprintf(fout, "%d ", a[i]);
		}
	}

	fclose(fout);

}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello, it's Task1\n");

	Load();
	Saveresult();
}*/

//Zadacha2
/*int* pa;
int n;

void Load() {

	FILE* fin = fopen("C:\\OneDriveTemp\\in1.txt", "rt");

	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);

	pa = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}

	fclose(fin);
}

void SaveResult() {

	float sa = 0;
	float s = 0;

	for (int i = 0; i < n; i++) {
		s += pa[i];
	}

	sa = s / n;

	int m = 0;

	for (int i = 0; i < n; i++) {
		if (pa[i] > sa) {
			m++;
		}
	}

	FILE* fout = fopen("C:\\OneDriveTemp\\out1.txt", "wt");

	if (fout == NULL) {
		printf("Выходной файл не найден");
		return;
	}

	fprintf(fout, "%d\n", m);

	for (int i = 0; i < n; i++) {
		if (pa[i] > sa) {
			fprintf(fout, "%d ", pa[i]);
		}
	}

	fclose(fout);
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello, it's Task2\n");

	Load();
	SaveResult();

	free(pa);
}*/

/*int* pa;
int n;

void Load() {

	FILE* fin = fopen("C:\\OneDriveTemp\\in1.txt", "rt");

	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);

	pa = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}

	fclose(fin);
}

void SaveResult() {

	float sa = 0;
	float s = 0;

	for (int i = 0; i < n; i++) {
		s += pa[i];
	}

	sa = s / n;

	int m = 0;

	for (int i = 0; i < n; i++) {
		if ((pa[i] < sa) && (pa[i] > 0)) {
			m++;
		}
	}

	FILE* fout = fopen("C:\\OneDriveTemp\\out1.txt", "wt");

	if (fout == NULL) {
		printf("Выходной файл не найден");
		return;
	}

	fprintf(fout, "%d\n", m);

	for (int i = 0; i < n; i++) {
		if ((pa[i] < sa)&&(pa[i]>0)) {
			fprintf(fout, "%d ", pa[i]);
		}
	}

	fclose(fout);
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello, it's Task3\n");

	Load();
	SaveResult();

	free(pa);
}*/

//Zadacha4
int* pa;
int n;

void Load() {

	FILE* fin = fopen("C:\\OneDriveTemp\\in1.txt", "rt");

	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);

	pa = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}

	fclose(fin);
}

void SaveResult() {
	
	float maxi = 0;
	float s = 0;

	for (int i = 0; i < n; i++) {
		if (maxi < pa[i]) {
			maxi = pa[i];
		}
	}

	float sm = (maxi * 2) / 3;

	int m = 0;

	for (int i = 0; i < n; i++) {
		if (pa[i] > sm) {
			m++;
		}
	}

	FILE* fout = fopen("C:\\OneDriveTemp\\out1.txt", "wt");

	if (fout == NULL) {
		printf("Выходной файл не найден");
		return;
	}

	fprintf(fout, "%d\n", m);

	for (int i = 0; i < n; i++) {
		if (pa[i] > sm) {
			fprintf(fout, "%d ", pa[i]);
		}
	}

	fclose(fout);
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello, it's Task4\n");

	Load();
	SaveResult();

	free(pa);
}