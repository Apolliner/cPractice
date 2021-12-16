#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void day1() {
	// Первый день занятий
	int count = 3235;
	char start = 115;
	printf("|%10c|%10s|%-10d|\n", start, ".", count - 2345);

	int list[3];
	list[1] = 3;
	list[2] = 5;
	list[4] = 6;
	printf("|%5d|%5d|%5d|%5d|\n", list[0], list[1], list[2], list[4]);

	char chars[] = { 's', 't', 'r', 'i', 'n', 'g', '\0' };
	printf("%s\n", chars);


	printf("Integer: %lu \n", sizeof(chars));


	int a1;
	unsigned a2;
	short a3;
	unsigned short a4;
	long a5;
	unsigned long a6;
	char a7;
	float a8;
	double a9;
	long double a10;
	int a11[10];
	char a12[] = "hello";
	printf("%20s: %10lu\n", "Integer", sizeof(a1));
	printf("%20s: %10lu\n", "Unsigned", sizeof(a2));
	printf("%20s: %10lu\n", "Short", sizeof(a3));
	printf("%20s: %10lu\n", "Unsigned short", sizeof(a4));
	printf("%20s: %10lu\n", "Long", sizeof(a5));
	printf("%20s: %10lu\n", "Unsigned long", sizeof(a6));
	printf("%20s: %10lu\n", "Char", sizeof(a7));
	printf("%20s: %10lu\n", "Float", sizeof(a8));
	printf("%20s: %10lu\n", "Double", sizeof(a9));
	printf("%20s: %10lu\n", "Long double", sizeof(a10));
	printf("%20s: %10lu\n", "Array of 10 integers", sizeof(a11));
	printf("%20s: %10lu\n", "String <hello>", sizeof(a12));

}


void day2() {
	// Второй день занятий
	char one_char = '4';
	char two_char = '7';
	printf("%d\n", one_char + two_char);


	char not_num[] = "528";
	int num = (not_num[0] - 48) * 100 + (not_num[1] - 48) * 10 + (not_num[2] - 48);
	printf("%d, %d, %d, %d\n", not_num[0], not_num[1], not_num[2], num - 10);

	char char_A = 65;
	printf("%c|%c|%c|\n", char_A + 5, char_A + 12, char_A + 19);

	char busy_string[] = "\tthis \ris very \bbusy \"string\"\%";
	printf("%s\n", busy_string);


	int a = 12;
	int b = 15;
	int c = 17;
	int d = 28;
	printf("%d\n", a == b && c < d);
	printf("%d\n", c < d);


	if (a > b) {
		printf("nop\n");
	} else if (a == b) {
		printf("nop2\n");
	} else {
		if (a <= 0){
			printf("nop3\n");
		}
		else {
			printf("yep\n");
		}
	}
	switch (a) {
	case 11:
		printf("%d ", 0);
	case 12:
		printf("%d ", 1);
	case 13:
		printf("%d ", 2);
		break;
	default:
		printf("%d \n", -1);
	}
}

void day3() {
	// Третий день занятий
	int star = 0;
	while (star < 55) {
		star++;
		printf("*");
	}
	char symbol = 0;
	while (symbol != 127) {
		if (symbol % 10 == 0) {
			printf("%d - %c\n", symbol, symbol);
		}
		else {
			printf("%d - %c ", symbol, symbol);
		}
		++symbol;
	}
	printf("----------------------------------\n");
	int number_line = 0;
	int number_tile = 0;
	while (number_line != 10) {
		++number_line;
		while (number_tile != 10) {
			++number_tile;
			printf("%3d ", number_line * number_tile);
		}
		number_tile = 0;
		printf("\n");
	}


	int a = 0;
	do {
		printf("%d\n", a % 10);
		a = a / 10;
	} while (a > 0);

	
	
	for (int for_number_line = 1; for_number_line < 10; for_number_line++, printf("\n")) {
		for (int for_number_tile = 1; for_number_tile < 10; for_number_tile++) {
			printf("%3d ", for_number_line*for_number_tile);
		}
	}


}


void day4() {
	// Четвёртый день занятий
	int a, b;
	a = 017;
	b = 036;
	printf("0%o & 0%o = 0%o\n", a, b, a & b);
	printf("0%o | 0%o = 0%o\n", a, b, a | b);
	printf("0%o ^ 0%o = 0%o\n", a, b, a ^ b);
	printf("0%o << 2 = 0%o\n", a, a << 2);
	printf("0%o >> 2 = 0%o\n", a, a >> 2);
	printf("~0%o = 0%o\n", a, ~a);

	printf("\n");

	int numbers[10] = { 1, 1, -5, 3, -6, 2, 0, -1, -3, 0 };
	int mask = 0;
	for (int i = 0; i <= 10; i++) {
		if (numbers[i] >= 0) {
			mask = mask | (int)pow(2, 10-i-1);
		}
	}
	printf("Octal - %o| Decimal - %d\n\n", mask, mask);

	char str[] = "test putchar()";
	for (int i = 0; str[i] != '\0'; i++) {
		putchar(str[i]);
		putchar('-');
	}

		

}

void day5() {
	// Пятый день занятий
	int i = 22524;
	printf("i=%d, &i=%p \n", i, &i);

	int a = 6;
	float b = 10.11;
	char c = 'k';

	printf("%5d - %p\n", a, &a);
	printf("%5.2f - %p\n", b, &b);
	printf("%5c - %p\n", c, &c);

	a = 2;
	b = 50.99;
	c = 'z';

	printf("%5d - %p\n", a, &a);
	printf("%5.2f - %p\n", b, &b);
	printf("%5c - %p\n", c, &c);

	int x = 1, y, z = 3;
	int* p, * q;

	p = &x;
	printf("%d\n", *p); // 1

	y = *p;
	printf("%d\n", y); // 1

	*p = 0;
	printf("%d %d\n", x, y); // 0 1

	q = &z;
	printf("%d\n", *q); // 3

	p = q;
	*p = 4;
	printf("%d\n", z); // 4

	printf("%p %p\n\n", p, q); // p == q

	int* pi;
	float* pf;

	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));

	int l = 5;
	float v = 6.98;
	int* pa;
	float* pc;

	pa = NULL;
	pc = NULL;

	// printf(" %15p %15p\n", pa, pc);

	// Error
	// printf(" %15d %15f\n", *pa, *pc);

	pa = &l;
	pc = &v;

	printf(" %15p %15p\n", pa, pc);
	printf(" %15d %15f\n", *pa, *pc);

}

void day6();

int cube(int); // Объявление переменной до main

int hello();

void multi(int* px, int y);

void day7();

void day8();

int main() {
	
	/*
	day5();
	int z = 5;
	int c = 2;
	int n = 1;
	printf("%5d|%5d|%5d|\n", cube(z), cube(c), cube(n));

	printf(" - %d-й вызов\n", hello());
	printf(" - %d-й вызов\n", hello());
	printf(" - %d-й вызов\n", hello());

	int x = 34, y = 6;

	multi(&x, 367);
	multi(&y, 91);
	printf("%d %d\n", x, y);
	*/

	day8();
	return 0;
}

int cube(int x) { // Определение функции в любом месте после main
	return pow(x, 3);
}

int hello() {
	static count = 1;
	printf("Hello world!");
	return count++;
}

void multi(int *base, int pow) {
	while (pow >= 10) {
		*base = *base * 10;
		pow = pow / 10;
	}
}

void day6() {
	// Шестой день занятий по Си
	/*int zero;
	char ch, buf[30];
	ch = scanf_s("%s%d", buf, 5, &zero);
	printf("%s|%d|%d\n", buf, zero, ch);

	int q, w, e;
	w = 5;
	char ch2;
	ch2 = scanf_s("%d + %*d = %d", &q, &w, &e); // Игнорируется w
	printf("Your answer is %d\n", e);
	printf("The correct is %d\n", q + w);
	printf("count: %d", ch2);
	*/
	char str[30] = "";

	scanf_s("%[0-9]", str, 30);
	printf("%s\n", str);

	scanf_s("%[^;:,!?]", str, 30);
	printf("%s\n", str);
}

void day7() {
	// Седьмой день занятий
	/*int random;
	random = rand();
	printf("Random integer = %d\n", random);
	int random2;
	random2 = rand();
	printf("Random2 integer = %d\n", random2);
	char i;
	for (i = 1; i <= 50; i++) {
		printf("%15d", rand());
		if (i % 5 == 0) printf("\n");
	}
	
	char query;
	scanf_s("%d", &query, 1);
	printf("query = %d\n", query);
	srand(query);
	char v;
	for (v = 1; v <= 50; v++) {
		printf("%15d", rand());
		if (v % 5 == 0) printf("\n");
	}
	
	int time_null = time(NULL);
	srand(time_null);
	printf("time = %d, random number = %d", time_null, rand());
	*/
	int max_range = 100; // Если нужно поднять минимальную границу, то нужно приплюсовывать её значение к каждому выводу
	for (int i = 1; i <= 50; i++) {
		int rand_int = rand();
		if (rand_int < max_range) {
			printf("%5d", rand_int);
		} else {
			printf("%5d", rand_int % max_range);
		}
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n");
}

#define N 10

void day8() {
	// Восьмой день занятий
	/*
	int i;
	int arr[5] = { 0 };

	srand(time(NULL));

	for (i = 0; i < N; i++)
		switch (rand() % 5) {
		case 0: arr[0]++; break;
		case 1: arr[1]++; break;
		case 2: arr[2]++; break;
		case 3: arr[3]++; break;
		case 4: arr[4]++; break;
		}

	for (i = 0; i < 5; i++)
		printf("%d - %.2f%%\n", i,
			((float)arr[i] / N) * 100);
	
	int arrI[10], i;
	for (i = 0; i < N; i++)
		printf("%d - %p\n", i, &arrI[i]);
	
	int* pI;
	pI = &arrI[4];
	int* number;
	for (i = 0; i < N; i++)
		printf("%p\n", pI + i);
	
	printf("%p = %p\n", arrI, &arrI[0]);
	printf("\n");
	for (i = 0; i < N; i++)
		printf("%p\n", arrI + i);
	printf("\n");
	for (i = 0; i < N; i++)
		printf("%d\n", *(arrI + i));
	*/

	int arrI[N], i;
	int* pI;

	pI = &arrI[5];

	for (i = 0; i < N; i++)
		printf("%p, %p\n", &pI[i], &arrI[i]);

	char str[20], * ps = str, n = 0; // Создаётся массив и ссылка на его первый элемент.

	printf("Enter word: ");
	scanf_s("%s", str, 20);

	while (*ps++ != '\0') n++; // Производится инкремент по ссылке, который позволяет получить значения массива по порядку.

	printf("%d\n", n);

}