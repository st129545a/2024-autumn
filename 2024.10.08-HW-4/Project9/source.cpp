#include <iostream>

int main(int argc, char* argv[]) 
{
    int n = 0;
    scanf_s("%d", &n);

    int A[100];
    for (int i = 0; i < n; i++) 
    {
        std::cin >> A[i];
    }

    int x= 0;
    scanf_s("%d", &x);

    int position = n + 1;

    for (int i = 0; i < n; i++) 
    {
        if (A[i] < x)
        {
            position = i + 1;
            break;
        }
    }

    printf("%d", position);
    

    EXIT_SUCCESS;
}
