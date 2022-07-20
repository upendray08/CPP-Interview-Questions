#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    //rowise input taking in a array 
    // for(int i=0;i<3;++i){
    //     for(int j=0;j<3;++j){
    //         cin>>arr[i][j];
    //     }
    // }
    
    //column wise taking input from an array 
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>arr[j][i];
        }
    }
    //column wise giving output in an array ;
    // for(int i=0;i<3;++i){
    //     for(int j=0;j<3;++j){
    //         cout<<arr[j][i]<<" ";
    //     }cout<<endl;
    // }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}