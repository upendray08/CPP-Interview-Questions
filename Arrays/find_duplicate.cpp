#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4 ,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxvalue = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxvalue = max(maxvalue, arr[i]);
    }
    // cout<<maxvalue<<endl; // debugging
    int checkarr[maxvalue + 1] = {0};
    for (int i = 0; i < size; ++i)
    {
        int count = 1;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        // cout<<count<<endl; // debugging
        if (checkarr[arr[i]] == 0)
        {

            checkarr[arr[i]] = count;
        }
    }
    for (int i = 0; i < (maxvalue + 1); ++i)
    {
        if (checkarr[i] == 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}