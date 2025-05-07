#include <bits/stdc++.h>
using namespace std;

void rightHalfPyramid(int n)
{
    cout << "Right Half Pyramid" << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void floydsTraingle(int n, int rows)
{
    cout << "Floyd's Traingle" << "\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << n++ << " ";
        }
        cout << "\n";
    }
}

void invertedRightHalfTraingle(int n)
{
    cout << "Inverted Right Half Traingle" << "\n";
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void leftHalfPyramid(int n)
{
    cout << "Left Half Pyramid" << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void hollowSquare(int n)
{
    cout << "Hollow Square" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}

void fullPyramid(int n)
{
    cout << "Full Pyramid" << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    rightHalfPyramid(5);
    floydsTraingle(1, 5);
    invertedRightHalfTraingle(5);
    leftHalfPyramid(5);
    hollowSquare(5);
    fullPyramid(5);
}
