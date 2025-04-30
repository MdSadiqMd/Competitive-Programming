#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input of an Array
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Value at Index " << i << " :";
        cin >> arr[i];
    }

    // Print out the Array
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    // Printout the largest number in the Array
    int largest_number = INT_MIN;
    for (int i = 1; i < size(arr); i++)
    {
        largest_number = max(arr[i], largest_number);
    }
    cout << largest_number << "\n";

    // Possible Paird of Distinct Integers
    for (int i = 0; i < size(arr); i++)
    {
        for (int j = i; j < size(arr); j++)
        {
            cout << "(" << i << ", " << j << ")" << "\n";
        }
    }
    return 0;
}