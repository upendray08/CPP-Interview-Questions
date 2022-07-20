#include <bits/stdc++.h>
using namespace std;
int main()
{

   
	// Write your code here.
    string str;
    getline(cin,str);
    stringstream s(str);
    string word;
    string res ="";
    while(getline(s,word,' ')){
        if(res==""){
            res=word;
        }else{
            res+="@40"+word;
        }
    }
    cout<<res<<endl;

    return 0;
}