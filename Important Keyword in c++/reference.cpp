#include <iostream>
using namespace std;
int mainglobalhu = 12;
void a(int &i)
{
    i *= 2;
    mainglobalhu++;
    return;
}
void c(int i)
{
    // i *= 2;
    cout<<mainglobalhu<<endl;
    return;
}
void d(int &i)
{
    i *= 2;
    return;
}
int main()
{
    //reference variable diff from global 
    int b = 12;
    cout<<b<<endl;
    a(b);
    cout<<b<<endl;
    c(b);
    cout<<b<<endl;
    d(b);
    cout<<b<<endl;
    return 0;
}