#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int count =0;
    for(int i=0;i<str.size();i++){
        count++;
    }
    cout<<"the lenght of string is "<<count<<endl;
    // shortcut 
    cout<<str.length()<<endl;
    return 0;
}