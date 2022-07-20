#include <bits/stdc++.h>
using namespace std;
void changeSign(int *p)
{
    *p = (*p) * -1;
    return;
}
void fun(int a[])
{
    cout << a[0] << " ";
}

int main()
{
    // int a = 10;
    // cout<<a<<endl;
    // changeSign(&a);
    // cout << a << endl;
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
    return 0;
}