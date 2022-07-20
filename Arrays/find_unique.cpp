#include <bits/stdc++.h>

using namespace std;
int uniqueelement(int arr[], int size)
{
    // int maxvalue = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     maxvalue = max(maxvalue, arr[i]);
    // }
    // // cout<<maxvalue<<endl; // debugging
    // int checkarr[maxvalue + 1] = {0};
    // for (int i = 0; i < size; ++i)
    // {
    //     int count = 1;
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         if (arr[j] == arr[i])
    //         {
    //             count++;
    //         }
    //     }
    //     // cout<<count<<endl; // debugging
    //     if (checkarr[arr[i]] == 0)
    //     {

    //         checkarr[arr[i]] = count;
    //     }
    // }
    // int uniqueelement = 0;
    // for (int i = 0; i < (maxvalue + 1); i++)
    // {
    //     if (checkarr[i] == 1)
    //     {
    //         uniqueelement = i;
    //     }
    // }
    unordered_map<int, int> mp;
    for (int i = 0; i < size; ++i)
    {
        mp[arr[i]]++;
    }
    int uniqueelement = 0;
    // unordered_map<int,int>::iterator it;
    // for(it=mp.begin();it!=mp.end();++it){
    //     if(mp.find(10)!=mp.end()){
    //         uniqueelement = it->first;
    //     }
    // }

    for (auto a = mp.begin(); a != mp.end(); a++)
    {
        // if(mp.find(10)){
        //     // uniqueelement = i->first;
        // }
        cout<<mp.find(10)<<endl;
    }

    return uniqueelement;
}
int main()
{
    int arr[] = {2, 2, 2, 10, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "unique element is " << uniqueelement(arr, size) << endl;
    return 0;
}