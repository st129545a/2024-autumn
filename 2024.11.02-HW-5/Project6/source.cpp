#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 

    int n, m;
    cin >> n >> m;

    int a[100001] = { 0 }; 

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }

    for (int i = 0; i < m; ++i)
    {
        int y;
        cin >> y;
        if (a[y] == 1)
        {
            a[y] = 2;
        }
    }

    for (int i = 0; i <= 100000; ++i)
    {
        if (a[i] == 2)
        {
            cout << i << " "; 
        }
    }


    EXIT_SUCCESS;
}

													
												