#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6, X = 13;
    int arr[] = {1, 4, 45, 6, 10, 8};
    array<vector<int>,6> array;
    // vector<int> a;
    int l=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n-1;++j){
            for(int k=0;k<n-2;++k){
                if(arr[i]+arr[j]+arr[k] == X){
                    vector<int> a;
                    a.push_back(arr[i]);
                    a.push_back(arr[j]);
                    a.push_back(arr[k]);
                    array[l] = a;
                    l++;
                }
            }
        }
    }
    //l is modified by 
    for(int i=0;i<l;++i){
        vector<int> res = array[i];
        for(int j=0;j<res.size();++j){
            cout<<res[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}