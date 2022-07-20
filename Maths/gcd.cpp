#include <bits/stdc++.h>
using namespace std;
int gcdevalute(int x,int y){
    if(x==0){
        return y;
    }
    if(y==0){
        return x;
    }
    while(x!=y){
        if(x>y){
            x = x-y;
        }else if(x<y){
            y = y-x;
        }
    }
    return x;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int ans  = gcdevalute(x,y);
    int lcm = (x*y)/ans;
    cout<<ans<<endl;
    cout<<lcm<<endl;
    return 0;
}