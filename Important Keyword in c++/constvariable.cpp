#include <iostream>
using namespace std;
int main()
{
    // declaration of const variable 
    const int intval = 12; //const int inval; wrong declaration
    const float floatval =12.2; 
    const double doubleval =12.56;
    const char ch = 'a';
    const string name = "test";
    name = "ucan'tchangeme"; //it is not possible to change a const variable 
    cout<<name<<endl;
    return 0;
}