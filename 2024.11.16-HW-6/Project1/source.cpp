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

int* initIntArray(int len)
{
	int* arr = NULL;
	arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; arr != nullptr && i < len; ++i)
	{
		arr[i] = 0;
	}
	return arr;
}

int* inputIntArray(int* a, int len)
{
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		scanf_s("%d ", a[i]);
	}
	printf("\n");
	return a;
}

void printIntArray(int* a, int len)
{
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void expandIntArray(int** a, int* len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}

int main(int argc, char* argv[])
{
	int len = 0;
	scanf_s("%d", &len);
	int* a = initIntArray(len);

	inputIntArray(a, len);
	printIntArray(a, len);

	bool flag = true;
	while (flag)
	{
		menu();
		int choice = 0;
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 0:
		{
			flag = false;
			break;
		}
		case 1:
		{
			break;
		}
		case 2:
		{

			break;
		}
		case 3:
		{
			int el = 0;
			scanf_s("%d", &el);
			break;
		}
		}
	}


	return 0;
}