#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void insertionsort(int arr[], int n)
    {
        //code here 
        //no of time iter for comparison 
        for(int step = 1;step<=n-1;++step){
            int j = step;
            while(j){
                if(arr[j-1]>arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
                j--;
            }
        }
        return;
    }
};
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
int main()
{
    int arr[1000], n, T, i;

    cin>>T;

    while (T--)
    {

        cin>>n;

        for (i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        Solution ob;
        ob.insertionsort(arr,n);
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    return 0;
}