#include <bits/stdc++.h>
using namespace std;
int main()
{
    int var = 4;
    int *ptr = &var;
    char st ='a';
    char *ch = &st;
    double a  = 4.20;
    double *aptr = &a;
    cout<<"add of var "<<ptr<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(aptr)<<endl;
    //pointer stored only address therefore its size remain same 8byte depend on OS and computer architecture
    cout<<"value of var "<<*ptr<<endl;
    cout<<"add of ptr"<<&ptr<<endl;
    return 0;
}