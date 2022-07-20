#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int countzero = 0;
    int countone = 0;
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; ++i)
    {
        if (array[i] == 0)
        {
            countzero++;
        }
        else if (array[i] == 1)
        {
            countone++;
        }
    }
    // countzero = 5 and countone = 5
    fill_n(array, size, 0);
    // array.clear();
    int k = 0;
    for (int i = 0; i < size; ++i)
    {
        if (i < countzero)
        {
            array[k++] = 0;
        }
        else if (i >= countone)
        {
            array[k++] = 1;
        }
    }
    // answer is modified k = 10
    cout<<k<<endl;
    for (int i = 0; i < k; ++i)
    {
        cout << array[i] << " ";
    }

    return 0;
}