#include <iostream>

int main(int argc, char* argv[]) 
{
    int n;
    scanf_s("%d", &n);

    int heights[100]; 
    for (int i = 0; i < n; ++i) 
    {
        scanf_s("%d", &heights[i]);
    }

    int x; 
    scanf_s("%d", &x);

    int p = 1;

    for (int i = 0; i < n; ++i) 
    {
        if (heights[i] > x) 
        {
            p++; 
        }
        else 
        {
            p++; 
            break;
        }
    }

    printf("%d", p);


    EXIT_SUCCESS;
}