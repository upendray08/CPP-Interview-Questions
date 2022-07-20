#include <iostream>
using namespace std;
pair<int, int> sum(int *arr, int size)
{
    int sum = 0;
    arr[0] = 32;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return {sum, arr[0]};
}
int main()
{
    int size;
    cin >> size;
    int arr[size] = {4, 1, 2, 3, 4, 5, 6, 7, 8};
    pair<int, int> pr;
    pr = sum(arr, size);
    cout << pr.first << " " << pr.second << endl;
    return 0;
}