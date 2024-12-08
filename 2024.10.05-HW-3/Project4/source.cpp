#include <iostream>

int main(int argc, char* argv[]) 
{
    int n;
    scanf_s("%d", &n);

    int max_age = -1;
    int oldest_man_index = -1;

    for (int i = 1; i <= n; ++i) 
    {
        int v, s;
        scanf_s("%d", &v);
        scanf_s("%d", &s);

        if (s == 1)
        {
            if (v > max_age) 
            {
                max_age = v;
                oldest_man_index = i;
            }
        }
    }
    printf("%d", oldest_man_index == -1 ? -1 : oldest_man_index);


    EXIT_SUCCESS;
}
