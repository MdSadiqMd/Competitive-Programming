#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 0 && age <= 17)
    {
        cout << "Child" << endl;
    }
    else if (age >= 18 && age <= 64)
    {
        cout << "Adult" << '\n';
    }
    else
    {
        cout << "Old" << '\n';
    }
    return 0;
}