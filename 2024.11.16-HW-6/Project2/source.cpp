#include <cstdio>
#include <cstdlib>
#include <iostream>

void menu()
{
	system("cls");
	printf("0 - exit\n");
	printf("1 - print array\n");
	printf("2 - add to front\n");
	printf("3 - add to end\n");
}

int* createArr(int len)
{
	int* arr = NULL;
	arr = (int*)malloc(sizeof(int) * len);
	return arr;
}

int* inputIntArray(int* dub, int len)
{
	for (int i = 0; dub != NULL && i < len; ++i)
	{
		scanf_s("%d ", &dub[i]);
	}
	printf("\n");
	return dub;
}

void printIntArray(int* b, int len)
{
	for (int i = 0; b != NULL && i < len; ++i)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}


int main(int argc, char* ragv[])
{
	menu();
	int len = 3;
	//scanf_s("%d", &len);
	createArr(len);
	int* dub = createArr(len);
	inputIntArray(dub, len);
	int* b = inputIntArray(dub, len);
	printIntArray(b, len);

	return 0;
}