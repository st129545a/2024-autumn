#include <iostream>

int main() 
{
    int n = 0;
    scanf_s("%d", n);

    int max_age = -1; 
    int nomOld = -1; 

    for (int i = 0; i < n; ++i) 
    {
        int v = 0;
        int s = 0;
        printf("%d", &v);
        printf("%d", &s);

        if (s == 1) 
        { 
            if (v > max_age) 
            {
                max_age = v;
                nomOld = i + 1;
            }
            else if (v == max_age) 
            {
                nomOld = std::min(nomOld, i + 1);
            }
        }
    }

    if (nomOld == -1) {
        printf("%d", -1);
    }
    else {
        printf("%d", nomOld);
    }

    EXIT_SUCCESS;
}