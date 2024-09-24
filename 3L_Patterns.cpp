#include <iostream>
using namespace std;

void squareFill(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << " * ";
            j++;
        }
        i++;

        cout << endl;
    }
}
void rightHalfPy(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << " * ";
            j++;
        }
        i++;
        cout << endl;
    }
}

void reverseRightHalfPy(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = i;
        while (j < n)
        {
            cout << " * ";
            j++;
        }
        i++;
        cout << endl;
    }
}

void leftHalfPy(int n)
{
    int i = 1;
    while (i < n)
    {
        int k = n;
        while (k > i)
        {
            cout << " _ ";
            k--;
        }
        int j = 0;
        while (j < i)
        {
            cout << " * ";
            j++;
        }
        i++;
        cout << endl;
    }
}

void reverseLeftHalfPy(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k < i)
        {
            cout << " _ ";
            k++;
        }
        int j = i;
        while (j <= n)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void numberIncreasingPy(int n)
{
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void numberIncreasingReversePy(int n)

{
    int i = 0;
    while (i < n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void numChgPy(int n)
{
    int i = 1;
    int k = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void sqHollow(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;

        while (j < n)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}

void numIncrease(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}

void numIncreaseBox(int n)
{
    int i = 0;
    int j = 1;
    while (i < n)
    {
        int k = 0;
        while (k < n)
        {
            cout << j << " ";
            k++;
            j++;
        }
        i++;
        cout << endl;
    }
}

void Triangle(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void leftHalfNum(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << i << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}

void leftHalfIncrease(int n)
{
    int i = 1;
    int k = 1;

    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << k << " ";
            j++;
            k++;
        }
        i++;
        cout << endl;
    }
}

void leftHalfSkip(int n)
{
    int i = 1;

    while (i <= n)
    {
        int k = i;
        int j = 0;
        while (j < i)
        {
            cout << k;
            k++;
            j++;
        }
        i++;
        cout << endl;
    }
}

void printUppercase(int n)
{
    int i = 1;
    char ch = 65;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }
}

void printUppercase2(int n)
{
    int i = 0;
    while (i < n)
    {
        char ch = 65 + i;
        int j = 0;
        while (j < n)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }
}
void printLeftPy(int n)
{
    int i = 0;
    while (i < n)
    {
        char ch = 65 + i;
        int j = 0;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        i++;
        cout << endl;
    }
}

void printLeftPIncrease(int n)
{
    int i = 0;
    char ch = 65;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}

void printDecreaseCh(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 65 + n - i;
        while (j <= i)
        {
            cout << ch;
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }
}
void space_n_astric(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = n - 1;
        while (j > i)
        {
            cout << " _ ";
            j--;
        }
        int k = 0;
        while (k <= i)
        {
            cout << " * ";
            k++;
        }
        cout << endl;
        i++;
    }
}

void invertedPy(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n - i)
        {
            cout << " * ";
            j++;
        }
        i++;
        cout << endl;
    }
}
void mirrorPy(int n)
{
    int i = 0;
    while (i < n)
    {
        int k = 1;
        while (k <= i)
        {
            cout << " _ ";
            k++;
        }
        int j = 0;
        while (j < n - i)
        {
            cout << " * ";
            j++;
        }
        i++;
        cout << endl;
    }
}

void mirrorNum(int n)
{
    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k < i)
        {
            cout << "_";
            k++;
        }
        int j = 0;
        while (j <= n - i)
        {
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}

void final(int n)
{
    int i = 1;
    while (i <= n)
    {
        // for spaces
        int j = 0;
        while (j <= n - i)
        {
            cout << "_";
            j++;
        }
        // for 1st Triangle
        int k = 1;
        while (k <= i)
        {
            cout << k;
            k++;
        }
        // For 2nd Triangle
        int y = 1;
        while (y < i)
        {
            cout << i + y - 1;
            y--;
        }
        i++;
        cout << endl;
    }
}

void printHollow(int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (j == 0 | j == n - 1 | i == 0 | i == n - 1)
            {
                cout << " * ";
                j++;
            }
            else
            {
                cout << "   ";
                j++;
            }
        }
        i++;
        cout << endl;
    }
}

int main()
{
    int n = 4;

    // squareFill(n);
    // rightHalfPy(n);
    // reverseRightHalfPy(n);
    leftHalfPy(n);
    // reverseLeftHalfPy(n);
    // numberIncreasingPy(n);
    // numberIncreasingReversePy(n);
    // numChgPy(n);
    // sqHollow(n);
    // numIncrease(n);
    // numIncreaseBox(n);
    // Triangle(n);
    // leftHalfNum(n);
    // leftHalfIncrease(n);
    // leftHalfSkip(n);
    // leftHalf1_21_321(n);
    // printUppercase(n);
    // printUppercase2(n);
    // printLeftPy(n);
    // printLeftPIncrease(n);
    // printDecreaseCh(n);
    // space_n_astric( n);
    // invertedPy(n);
    // mirrorPy( n);
    // mirrorNum(n);
    // final(n);
    // printHollow(n);

    return 0;
}