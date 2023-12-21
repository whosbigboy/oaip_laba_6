#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>

#define MAX_N 8
#define MAX_M 10

int arr[MAX_N][MAX_M] = {
	{10, 11, 12, 13 },
	{20, 21, 22, 23 },
	{30, 31, 32, 33 }
};

int n = 3;
int m = 4;



void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

void fillIx10() {
	printf("\n!!!! fillIx10() !!!!");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;
		}
	}
}

void fillZero() {
	printf("\n!!!! fillZero() !!!!");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}

void feelRand() {
	printf("\n!!!! fillRand() !!!!");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void evenx10() {
	printf("\n!!!! evenx10() !!!!");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 2 != 0) {
				arr[i][j] *= 10;
			}
		}
	}
}

void Kratn10() {
	printf("\n!!!! del10() !!!!");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 10 == 0) {
				arr[i][j] = arr[i][j]/10;
			}
		}
	}
}

void input_klava() {
	printf("\n!!!! evenx10() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%i ������ � %i ������� = ", i, j);
			scanf_s("%d", &arr[i][j]);
		}
	}
}

void save() {
	FILE* fout = fopen("C:\\OneDriveTemp\\out1.txt", "wt");
	if (fout = NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d ", n);
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fprintf("%i", arr[i][j]);
		}
		fprintf(fout,"\n");
	}
	fclose(fout);
}

void load() {
	FILE* fin = fopen("C:\\OneDriveTemp\\in1.txt", "rt");
	if (fin = NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fscanf(fin, "%d ", n);
	fscanf(fin, "%d\n", m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf("%i", arr[i][j]);
		}
	}
	fclose(fin);
}

void delRow(int del) {
	printf("\n!!!! delRow() !!!!",del);
	for (int i = del; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}

void addCollumn() {
	printf("\n!!!! addCollumn() !!!!");
	int r = 0;
	printf("\n����� ������� �������������� =  ");
	scanf("%d", &r);
	m = m + 1;
	for (int i = 0; i < n; i++) {
		for (int j = m; j > r; j--) {
			arr[i][j] = arr[i][j - 1];
		}
	}
}

void Var1() {
	int x, z;
	printf("\n!!!! Var1() !!!!");
	int mini=10000, maxi=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mini > arr[i][j]) {
				mini = arr[i][j];
				z = j;
				x = i;
			}
			if (maxi < arr[i][j]) {
				maxi = arr[i][j];
			}
		}
	}

	float sa = (maxi + mini) / 2;
	 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i < x) && (j < z)) {
				arr[i][j] = sa;
			}
		}
	}
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	int item;
	do {
		printf("\n");
		print();
		printf("------------------------------\n\n");
		printf("�������� ������ ��� ��������:\n");
		printf("1: ��������� ���������� i*10+j\n");
		printf("2: ��������� ������\n");
		printf("3: ��������� ���������� ����������\n");
		printf("4: ��� �������� �������� � 10 ���\n");
		printf("5: ��� ������� 10 ��������� � 10 ���\n");
		printf("6: ������ �������� � ����������\n");
		printf("7: �������� �������� �����\n");
		printf("8: ���������� � ����\n");
		printf("9: ������� �������� ������� �� �������\n");
		printf("10: �������������� �������� ������� �� �������\n");
		printf("11: �������� ��� �������� �� �� ���� ���� � ���, ���� ��� ���� � ����� ���\n");
		
		printf("-1: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			fillIx10();
			break;

		case 2:
			fillZero();
			break;

		case 3:
			feelRand();
			break;

		case 4:
			evenx10();
			break;

		case 5:
			Kratn10();
			break;

		case 6:
			input_klava();
			break;

		case 7:
			save();
			break;

		case 8:
			load();
			break;

		case 9:
			
			printf("����� ������, ������� ����� ������� = ");
			scanf_s("%i", &num);
			delRow(num);
			break;
		
		case 10:
			addCollumn();
			break;
		
		case 11:
			Var1();
			break;

		}



	} while (item != 0);

}