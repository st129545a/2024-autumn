#include<iostream>

int main(int argc, char* argv[])
{
	int T = 0;
	int V = 0;

	scanf_s("%d", &V);
	scanf_s("%d", &T);

	int s = V * T;
	printf("%d", (s % 109 + 109) % 109 + 1);

	return EXIT_SUCCESS;
}