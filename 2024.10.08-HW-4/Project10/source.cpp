#include <iostream>

int main(int argc, char* argv[]) 
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);

    int s[1000];
    for (int i = 0; i < n; ++i) 
    {
        s[i] = i + 1;
    }

    for (int i = a - 1, j = b - 1; i < j; ++i, --j)
    {
        std::swap(s[i], s[j]);
    }

    for (int i = c - 1, j = d - 1; i < j; ++i, --j) 
    {
        std::swap(s[i], s[j]);
    }

    for (int i = 0; i < n; ++i) 
    {
        printf("%d%s", s[i], " ");
    }


    EXIT_SUCCESS;
}