// reverse the array
#include <bits/stdc++.h>
using namespace std;
void reverse_arr(int arr[], int size)
{

    int l = arr[0];
    int r = arr[size-1];
    while(l<=r){
        // swap_byme(arr,l,r);
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    return (void)45; // (void)'a'
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_arr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}