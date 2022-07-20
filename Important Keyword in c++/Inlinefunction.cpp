#include <iostream> //prepocessor header file 
using namespace std;

inline int getMaxvalue(int &a, int &b) // memeory usage is reduces by reference
{
    return (a > b) ? a : b; //inline function work jabh function body about 1 or 2 line of code greater than that inline keyword doesn't work 
}
int main()
{
    // performance imporvment is my main objective here
    int a = 1, b = 2, ans;
    // if (a > b)
    // {
    //     ans = a;
    // }
    // else
    // {
    //     ans = b;
    // }
    ans = getMaxvalue(a, b);
    // inline bana diya above multiple line of code ko
    cout << ans << endl;
    a = 9, b = 12;
    ans = getMaxvalue(a, b); // inline bana diya above multiple
    cout << ans << endl;
    return 0;
}