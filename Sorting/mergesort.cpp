#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
// int count = 0;
// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// } Driver Code Ends
class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int temp[r - l + 1];
        int i = l;
        int j = m + 1;
        int k = 0;
        while (i <= m && j <= r)
        {
            if (arr[i] <= arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }
        while (i <= m)
        {
            temp[k++] = arr[i++];
        }
        while (j <= r)
        {
            temp[k++] = arr[j++];
        }
        for (int i = 0; i < k; ++i)
        {
            arr[l + i] = temp[i];
        }
        return;
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        // code here
        //  int n = sizeof(arr)/sizeof(int);
        // base condition

        if (l >= r)
        {
            return;
        }
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        // cout<<count++<<endl;
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
};

// { Driver Code Starts.

int main()
{
    int n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        cin>>n;
        int arr[n + 1];
        for (i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        // printArray(arr, n);
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    return 0;
} // } Driver Code Ends