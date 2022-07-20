#include <bits/stdc++.h>
using namespace std;
// how to return a reference variable
int &changex(int x) // bad pratice to do local variable will be only accessible inside the block or after func call local variable memeory will be clear 
{
    // x+=1;
    int nums = 10;
    int &ans = nums;

    return ans;
}
int* changeptr(int x){
    int *ptr = &x;
    return ptr;
}
void update(int &y)
{
    y *= 13;
    return;
}
int main()
{
    int x = 4;
    cout << x << endl;
    int y = changex(x);
    // cout<<y<<endl;
    cout << x << endl;
    // cout<<x<<endl;
    // int &y = x;
    // cout<<x<<endl;
    // update(x);
    // cout<<x<<endl;
    // // x--> 4 <----y same memory block but different name
    // cout << x << endl;
    // cout << y << endl;
    // cout << ++x << endl; //post increment
    // cout << ++y<< endl;
    // sum(x);
    return 0;
}