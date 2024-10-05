
#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int a1 = a;
	int b1 = b;

	while (b != 0) {
		int c = b;
		b = a % b;
		a = c;
	}

	int nok = (a1 * b1) / a;

	printf("%d", nok);


	EXIT_SUCCESS;
}