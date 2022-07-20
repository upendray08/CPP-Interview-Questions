#include <bits/stdc++.h>
using namespace std;
int main()
{
    // entire array for any value initialized karna hai
    int val =10;
    // cin>>val;
    // int array[10];
    // fill_n(array,10,val);
    // int array[100] = {[0 ... 99] = 4};
    // int array[10];
    // array<int,10> arr;
    // arr.fill(val);
    array<int,100> arr;
    arr.fill(val);
    // fill(array,array+10,9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    // int array[100] = { [0 ... 99] = -1 };
    return 0;
}