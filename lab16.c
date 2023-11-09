#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%i ", arr[i]);
	}
	printf(">\n");
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}

int findMin() {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int cnt10() {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 10) {
			k++;
		}
	}
	return k;
}

int findLastEven() {
	int ind = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			ind = i;
		}
	}
	return ind;
}

int findIndexMin() {
	int ind = 0;
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			ind = i;
		}
	}
	return ind;
}

int findIndexMax() {
	int ind = 0;
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			ind = i;
		}
	}
	return ind;
}

void otric() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * (-1);
		}
	}

}

void zamena() {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 4) {
			arr[i] = 4;
		}
	}
}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("���������� �������:");
		printElements();
		printf("\n�������� ������ ��� ��������:\n");
		printf("1: ������ � ���������� ������\n");
		printf("2: x10 ��� ���� �������� ���������\n");
		printf("3: ����� ����������� �������\n");
		printf("4: ����� ���-�� ����� ������ 10\n");
		printf("5: �2 ���������� ������� ��������\n");
		printf("6: ������� ������ ����� ������������\n");
		printf("7: ����������� ������� ����������� � ������������ �������\n");
		printf("8: �������� ��� ������ �������� �� -1\n");
		printf("9: �������� ��� ������� ������ 4 �� 4\n\n");
		printf("0: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");

		scanf_s("%i", &item);


		switch (item) {
		case 1:
			keyboardInput();
			break;

		case 2:
			oddsX10();
			break;

		case 3:
		{
			int min = findMin();
			printf("\nmin = %i\n", min);
		}
		break;

		case 4:
		{
			int k = cnt10();
			printf("\n��� - �� ����� ������ 10 = % i\n", k);
		}
		break;

		case 5:
		{
			int ind = findLastEven();
			arr[ind] = arr[ind] * 2;
			printf("\n��������� ������, ������� ��������� = %i", arr[ind]);
		}
		break;


		case 6:
		{
			int index = findIndexMin();
			printf("������ ��� �������� = %i\n", index);

			int cnt = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					cnt++;
				}
			}
			printf("���-�� ������ ��������� ����� ������������ = %i", cnt);
		}
		break;

		case 7:
		{
			int index1 = findIndexMin();
			int index2 = findIndexMax();

			int tmp = arr[index1];
			arr[index1] = arr[index2];
			arr[index2] = tmp;
		}
		break;

		case 8:
		{
			otric();
			break;
		}

		case 9:
		{
			zamena();
			break;
		}

		}
	} while (item != 0);
}

	

