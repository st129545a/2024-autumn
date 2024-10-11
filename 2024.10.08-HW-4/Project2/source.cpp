#include <iostream>

int main(int argc, char* argv[])
{
    int n;
    scanf_s("%d", &n);
    int a[1000];

    for (int i = 1; i <= n; ++i) 
    {
        scanf_s("%d", &a[i]);
    }

    int l = 0;
    int r = 0;

    scanf_s("%d", &l);
    scanf_s("%d", &r);

    int maxEl = a[l];
    int c = l;

    for (int i = l; i <= r; ++i)
    {
        if (a[i] > maxEl) 
        {
            maxEl = a[i];
            c = i;
        }
    }

    printf("%d%s%d", maxEl, " ", c);


    EXIT_SUCCESS;
}