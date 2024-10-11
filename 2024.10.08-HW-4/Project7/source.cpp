#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int numbers[1000]; 

    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d", &numbers[i]);
    }

    for (int i = n - 1; i >= 0; --i)
    {
        printf("%d", numbers[i]);
        if (i != 0)
        {
            printf("%s"," ");
        }
    }


    EXIT_SUCCESS;
}