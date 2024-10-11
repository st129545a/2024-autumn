#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int a[1000]; 
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int maxEl = a[0];
    int minEl = a[0];

   
    for (int i = 0; i < n; ++i) 
    {
        if (a[i] > maxEl) 
        {
            maxEl = a[i];
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        if (a[i] < minEl) 
        {
            minEl = a[i];
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        if (a[i] == maxEl) 
        {
            a[i] = minEl;
        }
    }


    for (int i = 0; i < n; ++i) 
    {
        printf("%d%s", a[i]," ");
    }


    EXIT_SUCCESS;
}