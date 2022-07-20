#include<bits/stdc++.h>
using namespace std;

int main(){
    int minval = INT_MAX, maxval = INT_MIN;
    int arr[4] = {4,12,8,10};
    for(int i=0; i<4; i++){
        minval= min(minval, arr[i]);
        maxval= max(maxval, arr[i]);
    }
    cout<<minval<<" "<<maxval<<endl;
    return 0;
}