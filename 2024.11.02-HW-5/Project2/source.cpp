#include <iostream>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int a = 100000;

    int *p = (int*)malloc(a * sizeof(int)); 
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> p[i];
    }

    int k;
    std::cin >> k;

    k = k % n;
    if (k < 0) 
    {
        k += n;
    }

    int r = 100000;
    int *m = (int*)malloc(r * sizeof(int));
    for (int i = 0; i < n; ++i) 
    {
        m[(i + k) % n] = p[i];
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;

    
    EXIT_SUCCESS;
}