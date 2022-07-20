#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1 ,2, 2 ,2, 3, 4};
    int arr2[] = {2 ,2 ,3 ,3};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int n;
    if (size2 >= size1)
    {
        n = size2;
    }
    int res[n];
    int k = 0;
    for (int i = 0; i < size1; ++i)
    {
        for (int j = 0; j < size2; ++j)
        {
            if (arr1[i] == arr2[j])
            {
                res[k] = arr1[i];
                k++;
            }
        }
    }
    // k value is modified to k =2; is actual size of res array 
    // answer is
    int size3 = sizeof(res) / sizeof(res[0]);
    for (int i = 0; i < k; ++i)
    {
        cout << res[i] << " ";
    }
    return 0;
}