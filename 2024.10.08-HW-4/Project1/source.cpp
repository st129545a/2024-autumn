#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int* a = new int[n]; 
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d", &a[i]);
    }

    int x;
    scanf_s("%d", &x);

    int schetchick = 0; 
    for (int i = 0; i < n; ++i) 
    {
        if (a[i] == x)
        {
            schetchick++;
        }
    }

    printf("%d", schetchick);


	EXIT_SUCCESS;
}