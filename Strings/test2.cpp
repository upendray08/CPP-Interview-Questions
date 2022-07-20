#include <bits/stdc++.h>
using namespace std;
int main()
{
    // getline how to separate a line to into single words split
    string sentences , words;
    getline(cin,sentences);
    stringstream X(sentences);
    int count =0;
    while(getline(X,words,' ')){
        cout<<words<<endl;
        count++;
    }
    cout<<"total no of words in these sentences: "<<count<<endl;
    return 0;
}