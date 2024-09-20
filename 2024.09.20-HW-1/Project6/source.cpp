#include<iostream>

int main(int argc, char* argv[])
{
	int bg = 0;
	int bl = 0;

	scanf_s("%d", &bg);
	scanf_s("%d", &bl);

	int c = bg + bl - 1;
	printf("%d", c - bg);
	printf(" %d", c - bl);


	return EXIT_SUCCESS;
}