#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1();
int task2();
int task3();

int main() {
	setlocale(LC_CTYPE, "RUS");

	task1();
	task2();
	task3();

	return 0;
}

int task1() {
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("%c, %d, %.2f, %f\n", c, i, f, d);

	char user_inp_char;
	int user_inp_int;
	float user_inp_float;
	double user_inp_doudle;

	scanf("%c %d %f %le", &user_inp_char, &user_inp_int, &user_inp_float, &user_inp_doudle);
	//task 1a
	printf("Целая часть: %d, Дробная часть: %f\n", (int)user_inp_float, user_inp_float - (int)user_inp_float);
	//task 1b
	printf("Шестнадцатеричный код: %x, Десятичный код: %d\n", user_inp_char, user_inp_char);
	//task 1c
	printf("1/i: %f\n\n", 1 / (double)i);

	return 0;
}

int task2() {
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b;
	double z = a/b;

	printf("x = %d, y = %f, z = %f\n", x, y, z); //так как a и b имеют тип int, то и в результате деления мы получаем число типа int, которое потом в случае с x остается int, а в случаях с y и z переводится в float и double
	printf("float: %f, double: %f\n\n", (float)a / b, (double)a / b);


	return 0;
}

int task3() {
	int N;
	printf("Введите трехзначное число\n");
	scanf("%d", &N);
	//task 3a
	printf("Последняя цифра введенного числа: %d\n", N % 10);
	//task 3b
	printf("Первая цифра введенного числа: %d\n", N / 100);
	//task 3c
	printf("Сумма цифр введенного числа: %d\n", N / 100 + N / 10 % 10 + N % 10);
	//task 3*
	printf("Число наоборот: %d%d%d", N % 10, N / 10 % 10, N / 100);

	return 0;
}