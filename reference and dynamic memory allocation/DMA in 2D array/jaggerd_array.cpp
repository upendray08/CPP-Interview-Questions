#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int **ptr = new int *[row];
    // insert karna easy hai phar 
    for (int i = 0; i < row; ++i)
    {
        int col;
        cin >> col;
        ptr[i] = new int[col];
        for (int j = 0; j < col; ++j)
        {
            cin >> ptr[i][j];
        }
    }
    // transversal karna bhi easy hai phar abhi mera mind thoda weak hai nhi toh me kar deta 
    for(int i=0;i<row;++i){
        // int col = sizeof(ptr[i])/sizeof(ptr[i][0]);
            // int col = sizeof(**ptr[i]);
            // int col = ptr[i].size();
        // cout<<col<<endl;
    }
    return 0;
}