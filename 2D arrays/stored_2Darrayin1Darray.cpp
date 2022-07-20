#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; //n is a no of rows and no of columns 
    cin>>n;
    m= n*n;
    int arr[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int array[m];
    int k=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int val = n*i+j;
            array[val] = arr[i][j];
        }
    }
    for(int i=0;i<m;++i){
        cout<<array[i]<<" ";
    }cout<<endl;
    return 0;
}