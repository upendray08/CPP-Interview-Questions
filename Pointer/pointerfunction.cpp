#include <bits/stdc++.h>
using namespace std;
// void print(int *p)
// {
//     // *p = *p + 9;
//     // p = p + 1;
//     cout << *p << endl;
//     return;
// }
int sumofvalue(int arr[], int n)
{
    int sum = 0;
    int i = 0;
    while (i++ < n)
    {
        sum += i[arr];
    }
    return sum;
    //arr[i] = *(arr+i)
    //i[arr] = *(arr+i)
} // int*p
int main()
{
    int temp = 10;
    cout << "before changing " << temp << endl;
    // print(&temp);
    cout << "after changing " << temp << endl;
    int arr[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int val = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout << sumofvalue(arr+4 ,n-val) << endl;
    // int nums[2][3] = {{16, 18, 20}, {25, 26, 27}};
    // for (int i = 0; i < 2; ++i)
    // {
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         cout << *(*(nums + i) + j) << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}