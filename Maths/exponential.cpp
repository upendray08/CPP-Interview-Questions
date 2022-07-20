#include <bits/stdc++.h>
using namespace std;
int M = (1e+9)+7;
int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        if(b&1 != 0){
            // res = (res*a)%M
            res =( res%M * a%M )%M;

        }
        a = (a%M * a%M)%M;
        b = b>>1;
    }
    return res%M;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout<<M<<endl;
    cout << power(a, b) << endl;
    return 0;
}