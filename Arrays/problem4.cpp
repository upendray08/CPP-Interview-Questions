#include <bits/stdc++.h>
using namespace std;
bool linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < 10; i++)
    {
        if (element == arr[i])
        {
            // cout << "x is found in arr";
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7};
    int x = 7;
    // search x in arr
    if(linearsearch(arr,10,x)){
        cout<<"x is found in arr"<<endl;
    }else{
        cout<<"x is not found in arr"<<endl;
    }

    return 0;
}