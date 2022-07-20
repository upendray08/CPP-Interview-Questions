#include <iostream>
using namespace std;
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};
    print(arr, 6);
    cout << endl;
    print(arr, 6, 3);

    return 0;
}