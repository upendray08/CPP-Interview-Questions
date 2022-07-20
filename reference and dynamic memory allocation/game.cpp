#include <bits/stdc++.h>
using namespace std;
int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int *ptr = new int[n];
    // dynamic allocate memory to this array no bad pratice
    for (int i = 0; i < n; ++i)
    {
        cin>>*(ptr+i) // ptr[i] = *(ptr+i) or i[ptr] = *(ptr+i)
    }
    cout << endl;
    // print()
    for (int i = 0; i < n; ++i)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    int res = getsum(ptr, n);
    cout << res << endl;

    return 0;
}