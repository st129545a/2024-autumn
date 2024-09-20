#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	
	printf("%d", n / 100 + n / 10 % 10 + n % 10);


	return EXIT_SUCCESS;
}