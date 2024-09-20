#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	
	scanf_s("%d", &a);

	int b = a + 1;
	int c = a - 1;
	printf("The next number for the number %d", a);
	printf(" is %d \n", b);
	printf("The previous number for the number %d", a);
	printf(" is %d", c);


	return EXIT_SUCCESS;
}