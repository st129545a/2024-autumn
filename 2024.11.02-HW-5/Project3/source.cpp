#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int tri[100];  
    int ch[100]; 
    int countTri = 0; 
    int countCh = 0; 

    for (int i = 0; i < n; ++i)
    {
        int day;
        std::cin >> day;

        if (day % 2 == 0) 
        { 
            ch[countCh++] = day;
        }
        else 
        { 
            tri[countTri++] = day;
        }
    }

    for (int i = 0; i < countTri; ++i) 
    {
        std::cout << tri[i];
        if (i < countTri - 1)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < countCh; ++i) 
    {
        std::cout << ch[i];
        if (i < countCh - 1) 
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    if (countCh >= countTri)
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }


    EXIT_SUCCESS;
}