#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    string sp="";
    int n =sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n){
        sp+=arr[i];
        cout<<sp<<endl;
        i++;

    }
    // cout<<sp;
    return 0;
}