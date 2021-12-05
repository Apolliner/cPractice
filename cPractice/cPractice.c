#include <stdio.h>

int main() {
	int count = 3235;
	char start = 115;
	printf("|%10c|%10s|%-10d|\n", start, ".", count-2345);

	int list[3];
	list[1] = 3;
	list[2] = 5;
	list[4] = 6;
	printf("|%5d|%5d|%5d|%5d|\n", list[0], list[1], list[2], list[4]);

	char chars[] = {'s', 't', 'r', 'i', 'n', 'g', '\0' };
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

	return 0;
}