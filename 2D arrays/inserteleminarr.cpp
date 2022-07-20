#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    //rowise insert into 2D array 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> res;

    //columnwise print 
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
    return 0;
}