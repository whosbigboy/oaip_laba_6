#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

#define MAX_LEN 80
char s[MAX_LEN];
char str[20];

int toUpperAll(int c) {
	int new_c = c;
	if (c >= 'a' && c <= 'z') new_c = 'A' + (c - 'a');
	if (c >= 'а' && c <= 'п') new_c = 'А' + (c - 'а');
	if (c >= 'р' && c <= 'я') new_c = 'Р' + (c - 'р');
	if (c == 'ё') new_c = 'Ё';
	return new_c;
}

int getNextDelim(FILE* fp, char token[]);
int getNextWord(FILE* fp, char token[], int maxLen);

char filename[] = "C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text4.txt";

//char filenameIn[] = "C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text5.txt";
//char filenameHTML[] = "C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text5h.html";

char filenameIn[] = "C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text6.txt";
char filenameOut[] = "C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\out6.txt";


void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Барышев Дмитрий\n");
	printf("ЛР23 Задача 1\n");

	//// Входной файл
	//FILE* fin = fopen("C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text1.txt", "rt");
	//if (fin == NULL) {
	//	printf("Входной файл не найден");
	//	return;
	//}

	//// Выходной файл
	//FILE* fout;
	//fout = fopen("C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\out1.txt", "wt");
	//if (fout == NULL) {
	//	printf("Выходной файл не создался");
	//	return;
	//}

	//// в цикле для всех строк
	//while (!feof(fin)) {
	//	// загрузить строку
	//	if (fgets(s, MAX_LEN - 1, fin) != NULL) {
	//		// обработать загруженную строку
	//		for (int i = 0; s[i] != '\0'; i++) {

	//			if (s[i] == '\t') // Если прочитан пробел
	//				s[i] = '%'; // Заменяем его на '%’

	//		}
	//		// сохранить строку в выходной файл
	//		fprintf(fout, "%s", s);
	//		printf(">>%s<<\n", s);
	//	}
	//}

	//// Входной файл
	//FILE* fin = fopen("C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text2.txt", "rt");
	//if (fin == NULL) {
	//	printf("Входной файл не найден");
	//	return;
	//}

	//// Выходной файл
	//FILE* fout;
	//fout = fopen("C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\out2.txt", "wt");
	//if (fout == NULL) {
	//	printf("Выходной файл не создался");
	//	return;
	//}

	//while (!feof(fin)) {
	//	// загрузить строку
	//	if (fgets(s, MAX_LEN - 1, fin) != NULL) {
	//		// обработать загруженную строку
	//		for (int i = 0; s[i] != '\0'; i++) {
	//			s[i] = toUpperAll(s[i]);

	//		}
	//		// сохранить строку в выходной файл
	//		fprintf(fout, "%s", s);
	//		printf(">>%s<<\n", s);
	//	}
	//}

	//// Входной файл
	//FILE* fin = fopen("C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\text3.txt", "rt");
	//if (fin == NULL) {
	//	printf("Входной файл не найден");
	//	return;
	//}

	//// Выходной файл
	//FILE* fout;
	//fout = fopen("C:\\Users\\dimoo\\source\\repos\\lab23\\lab23\\out3.txt", "wt");
	//if (fout == NULL) {
	//	printf("Выходной файл не создался");
	//	return;
	//}

	//int u = 0;
	//while (!feof(fin)) {
	//	if (fgets(s, MAX_LEN - 1, fin) != NULL) {
	//		int l = 0;
	//		for (int k = 0; s[k] != '\0'; k++) {
	//			l++;
	//		}
	//		int ht = 0;
	//		for (int i = 0; s[i] != '\0'; i++) {
	//			if (isalpha((unsigned char)s[i])) {
	//				ht = 1;
	//			}
	//			if (ht == 1) {
	//				s[l - 1] = '#';
	//			}
	//			else {
	//				printf("\n");
	//				u++;
	//			}
	//		}
	//		fprintf(fout, "%s\n", s);
	//		printf(">>%s<<\n", s);

	//	}
	//}

//	 FILE * fin = fopen(filename, "rt");
//	if (fin == NULL) {
//		// если файл не смогли открыть - сообщаем об этом
//		printf("File %s doesn't opened!\n", filename);
//		return;
//	}
//
//	char token[MAX_LEN];
//	int res;
//
//	// пока не конец файла
//	while (!feof(fin)) {
//		// пока есть разделитель - берем его
//		while (getNextDelim(fin, token)) {
//			// выводим разделитель в консоль
//			printf("<DELIM>%s</DELIM>\n", token);
//		}
//		// если есть слово - берем его
//		if (getNextWord(fin, token, MAX_LEN)) {
//			// выводим слово в консоль
//			printf("<WORD>%s</WORD>\n", token);
//		}
//	}
//
//	// Закрываем файл с текстом
//	fclose(fin);
//	printf("END!!!\n");
//
//
//

	//FILE* fin = fopen(filenameIn, "rt");
	//if (fin == NULL) {
	//	// если файл не смогли открыть - сообщаем об этом
	//	printf("File %s doesn't opened!\n", filenameIn);
	//	return;
	//}

	//FILE* fout = fopen(filenameHTML, "wt");
	//if (fout == NULL) {
	//	// закрываем ранее успешно открытый входной файл 
	//	fclose(fin);
	//	// если файл не смогли открыть - сообщаем об этом
	//	printf("File %s doesn't opened!\n", filenameHTML);
	//	return;
	//}


	//// Выводим в выходной файл заголовок HTML документа
	//fprintf(fout, "<!DOCTYPE html>");
	//fprintf(fout, "<html>");
	//fprintf(fout, "<head>");
	//fprintf(fout, "<meta http - equiv = \"Content-Type\" content = 	\"text/html; charset=utf-8\" />");
	//fprintf(fout, "<title>HTML Document</title>");
	//fprintf(fout, "</head>");
	//fprintf(fout, "<body>");

	//int ch;
	//while ((ch = getc(fin)) != EOF) {
	//	// в HTML файл добавляем только что прочитанный 
	//	// символ "КАК ЕСТЬ"
	//	fprintf(fout, "%c", ch);

	//	// если в тексте был символ новой строки – 
	//	// в HTML добавляем тег <BR> - новая строка
	//	if (ch == '\n')
	//		fprintf(fout, "<br>");

	//}

	//// выводит в HTML завершающие теги документа HTML
	//fprintf(fout, "</body>");
	//	fprintf(fout, "</html>");

	//fclose(fin);

	//// Закрываем HTML файл 
	//fclose(fout);
	//printf("END!!!\n");

	/*FILE* fin = fopen(filenameIn, "rt");
	if (fin == NULL) {

		printf("File %s doesn't opened!\n", filenameIn);
		return;
	}
	FILE* fout = fopen(filenameOut, "wt");
	if (fout == NULL) {

		fclose(fin);

		printf("File %s doesn't opened!\n", filenameOut);
		return;
	}

	while (!feof(fin)) {
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			int k = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i] == ';') {
					k++;
				}
			}
			sprintf(str, "%d", k);
			fprintf(fout, "%s%s\n", s, str);
			printf(">>%s%s<< \n", s, str);
		}

	}
	fclose(fin);
	fclose(fout);

	printf("END");*/
	

	printf("ЛР23 Задача 1 FINISH\n");
}
//
//
//	int isalpha_my(unsigned char ch);
//	int getNextDelim(FILE* fp, char token[]) {
//		int ch = getc(fp);
//		if (ch == EOF) {
//			return 0;
//		}
//		if (isalpha_my((unsigned char)ch)) {
//			ungetc(ch, fp);
//			return 0;
//		}
//		token[0] = (unsigned char)ch;
//		token[1] = '\0';
//		return 1;
//	}
//	int getNextWord(FILE* fp, char token[], int maxLen)
//	{
//		int i = 0;
//		int ch;
//		while (((ch = getc(fp)) != EOF) && (i < maxLen - 1)) {
//			if (!isalpha_my((unsigned char)(ch))) {
//				break;
//			}
//			token[i++] = ch;
//		}
//		ungetc(ch, fp);
//		token[i] = '\0';
//		if (i == 0)
//			return 0;
//		return 1;
//	}
//	int isalpha_my(unsigned char ch) {
//		if (isalpha(ch))
//			return 1;
//
//
//		if (ch >= 192 && ch <= 223)
//			return 1;
//		if (ch >= 224 && ch <= 255)
//			return 1;
//
//
//		return 0;
//	}
