#include <stdio.h>
#include <Windows.h>

long rec1(int n) {
	if (n == 0) {
		return 1;
	}
	long res = rec1(n - 1) * n;
	return res;
}

long f1(int n) {
	printf(" %d", n);
	if (n > 1) {
		f1(n - 2);
	}

}
long f2(int n) {
	if (n > 1) {
		f2(n - 2);
	}
	printf(" %d", n);
}

long f3(int n) {
	printf(" %d", n);
	if (n > 1) {
		f3(n - 2);
	}
	printf(" %d", n);
}

void recEGE1(int n) {
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}

void F1(int n) {
	if (n > 2) {
		printf("%d\n", n);
		F1(n - 3);
		F1(n - 4);
	}
}

void F2(int n) {
	if (n < 5) {
		printf("%d\n", n);
		F2(n + 1);
		F2(n + 3);
	}
}

void G3(int n);


void F3(int n) {
	if (n > 0) {
		G3(n - 1);
	}
}

void G3(int n) {
	printf("*");
	if (n > 1) {
		F3(n - 3);
	}
}

void main() {

	/*int n = 5;
	long f = rec1(n);

	printf("%d! = %ld", n, f);*/

	/*int n = 11;
	long f = f1(n);
	printf("\n");
	long f1 = f2(n);
	printf("\n");
	long f2 = f3(n);*/

	/*int n = 7;
	long f = f1(n);
	printf("\n");
	long f1 = f2(n);
	printf("\n");
	long f2 = f3(n);*/

	//recEGE1(3);

	/*int n = 10;
	F1(n);*/	

	/*int n = 1;
	F2(n);*/

	int n = 11;
	F3(n);


}