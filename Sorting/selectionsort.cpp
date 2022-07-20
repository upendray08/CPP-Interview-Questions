#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }

    void selectionSort(int arr[], int n)
    {
        // code here
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                    swap(arr[i], arr[j]);
            }
        }
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
        ob.selectionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}