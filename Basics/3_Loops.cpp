#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        cout << "While Loop working" << endl;
        break;
    }
    
    int num = 5;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << '\n';
        }
        cout << endl;
    }

    do
    {
        cout << "Do While Loop" << endl;
    } while (false);
}