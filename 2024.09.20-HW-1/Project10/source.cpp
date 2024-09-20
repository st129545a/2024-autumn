#include<iostream>

int main(int argc, char* argv[])
{
	int s = 0;
	scanf_s("%d", &s);

	int a = s / 6;
	printf("%d", a);
	printf(" %d", 4 * a);
	printf(" %d", a);


	return EXIT_SUCCESS;
}