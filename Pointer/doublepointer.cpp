#include <bits/stdc++.h>
using namespace std;
void update(int **a)
{
    // a = a + 1; no change in a 
    // *a = *a + 1; no change in a 
    **a = **a + 1;
    return;
}
int main()
{
    // ptr2 ---> ptr1 ---> a
    int a = 8;
    int *ptr1 = &a;
    // int **ptr2 = &ptr1;
    cout << "a = " << a << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << *ptr1 << endl;
    // cout << "ptr2 = " << ptr2 << endl;
    // cout << *ptr2 << endl;
    cout << "before = " << a << endl;
    update(&ptr1);
    cout << "after = " << *ptr1 << endl;

    return 0;
}