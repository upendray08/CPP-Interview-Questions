// swap alternate in array
#include <bits/stdc++.h>
using namespace std;
void swap_byme(int arr[],int a,int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    return;
}
void swap_alternate(int arr[], int size)
{
    // int first = 0;
    // int second = 1;
    // while(first<=size-2 && second<=size-1){
    //     swap(arr[first],arr[second]);
    //     first+=2;
    //     second+=2;
    // }
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<=size-1)
        {
            swap_byme(arr,i,i+1);
        }
    }
    for(int i=0;i<size; ++i){
        cout<<arr[i]<<" ";
    }
    return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; //{10,5}
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    swap_alternate(arr,size);
    return 0;
}