#include <iostream>
using namespace std;
void swap_byme(int arr[],int i,int j){
    int temp = arr[i];
    cout<<arr[j];
    cout<<arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    swap_byme(arr,1,2);
    for(int i=0;i<8;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}