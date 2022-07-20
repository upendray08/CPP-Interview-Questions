#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X = 5,N=5;
    int Arr[] = {1,2,3,4,5};
    array<pair<int,int>,5> P; //array<int> a; {(),(),} array<datatype,size_t> array;
    int k=0;
    for(int  i=0;i<N;++i){
        for(int j=i+1;j<N;++j){
            if(Arr[i]+Arr[j] == X){
                P[k] = make_pair(Arr[i],Arr[j]);
                k++;
            }
        }
    }
    //answer is 
    // k updated = 2
    for(int i=0;i<k;++i){
        cout<<P[i].first<<" "<<P[i].second<<endl;
    }
    return 0;
}