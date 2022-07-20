#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void bubblesort(int arr[], int n)
    {
        //code here 
        //no of time iter for comparison 
        for(int step = 0; step < n-1; step++){
            for(int i=0;i<n-step-1;++i){
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            }
        }

        return;
    }
};
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[1000], n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        Solution ob;
        ob.bubblesort(arr, n);
        printArray(arr, n);
    }
    return 0;
}