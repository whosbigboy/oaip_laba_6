#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

int IsDigit(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z') new_c = 'A' + (c - 'a');
	if (c >= '�' && c <= '�') new_c = '�' + (c - '�');
	if (c >= '�' && c <= '�') new_c = '�' + (c - '�');
	if (c == '�') new_c = '�';
	return new_c;
}

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*char name[12];
	printf("������� ���� ���: ");
	fgets(name, 11, stdin);
	printf("����������� ����, %s\n", name);*/

	/*printf("������� ������: ");
	int ch = getchar;
	for (int c = ch; c >= ch - 29; c--) {
		printf("'%c' (%d)\n", c, c);
	}
	printf("\n\n\n");*/

	/*char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);

	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}
	printf("\n� ��� %d ��������\n", cnt);*/

	/*char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);

	int k = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			s[i] = '#';
		}
	}*/

	/*char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);
	int cnt = 0;
	for (int i = 0; s[i]!='\0'; i++) {
		if (isdigit(s[i])) s[i]='$';
	}
	printf("\n%s\n", s);*/

	char s[80];
	printf("������� ������: ");
	fgets(s, 79, stdin);

	printf("\n�� ����� ������ s = \"%s\"", s);
	int k = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toUpperAll(s[i]);
	}
	printf("\n%s\n", s);

	{
		int x;
		scanf("%d", &x);	}
}
