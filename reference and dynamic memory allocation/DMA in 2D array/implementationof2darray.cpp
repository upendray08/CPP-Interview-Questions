#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int **ptr = new int *[row];
    for (int i = 0; i < row; ++i)
    {
        ptr[i] = new int[col];
        for (int j = 0; j < col; ++j)
        {
            cin >> *(*(ptr + i) + j); //*(*(ptr+i)+j) or ptr[i][j]
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    // releasing the array memory
    for (int i = 0; i < row; ++i)
    {
        delete[] ptr[i];
        cout << "realising-" << i << endl;
    }

    delete[] ptr; // arr[] invalid  or []ptr valid
    return 0;
}