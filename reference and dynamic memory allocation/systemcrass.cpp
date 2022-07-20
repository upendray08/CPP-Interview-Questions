#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int *ptr = new int;
        delete ptr;
    }
    // {} stack memeory delete after the function call end  {} nikalte hai tabh 
    //delete ptr 
    //delete ptr[],[]ptr,
    //stack memeory allocation automatically hota hai and then automatically delete or free ho jata hai program run karne ke bad 
    return 0;
}