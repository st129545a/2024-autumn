#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int jagodi = 0;

    for (int i = 0; i < n; ++i)
    {
        int sum = a[i] + a[(i - 1 + n) % n] + a[(i + 1) % n];
        if (sum > jagodi)
        {
            jagodi = sum;
        }
    }
    printf("%d", jagodi);


    EXIT_SUCCESS;
}