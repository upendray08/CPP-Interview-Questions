#include <bits/stdc++.h>
#define pi 3.14 // a piece of code in a program that is replace by a macros value is a macros
#define area(r) (pi * r * r)
#define DATE 20
#define minute hour
#define hour 20
#define ele 1,\
            2,\
            3,\
            4,\
            5
#define maxvalue(a,b) (((a)>(b))?(a):(b))
using namespace std;
int main()
{
    cout << pi * 4 * 4 << endl;
    int arr[5] = {ele};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans = area(4);
    cout << DATE << "-07-2022" << endl;
    cout << minute << endl;
    cout << ans << endl;
    int a,b;
    a=14;
    b =16;
    cout<<maxvalue(a,b)<<endl;
    return 0;
}