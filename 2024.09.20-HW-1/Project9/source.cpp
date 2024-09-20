#include<iostream>

int main(int argc, char* argv[])
{
	int H = 0;
	int a = 0;
	int b = 0;

	scanf_s("%d", &H);
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int k = a - b;
	printf("%d", H / k);


	return EXIT_SUCCESS;
}