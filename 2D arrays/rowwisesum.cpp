#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[4][4] = {{1, 1, 1, 1},
                       {2, 2, 2, 2},
                       {3, 3, 3, 3},
                       {4, 4, 4, 4}};
    // vector<int> rowsumvec;
    // vector<int> colsumvec;
    set<int> rowsumset;
    set<int> colsumset;
    for (int i = 0; i < 4; ++i)
    {
        int rowsum = 0;
        int colsum = 0;
        // int largestrowsum = INT_MIN;
        for (int j = 0; j < 4; ++j)
        {
            rowsum += array[i][j];
            colsum += array[j][i];
        }
        rowsumset.insert(rowsum);
        colsumset.insert(colsum);
    }
    cout<<"rowsumset:";
    for (auto i : rowsumset)
    {
        cout << i << " ";
    }
    cout << endl;
    cout<<"colsumset:";
    for(auto i:colsumset){
        cout<<i<<" ";
    }
    cout<<endl;
    //find the largest row sum
    int largestrowsum = INT_MIN;
    
    for(auto i:rowsumset){
        largestrowsum = max(largestrowsum,i);
    }
    cout<<largestrowsum<<endl;
    return 0;
}