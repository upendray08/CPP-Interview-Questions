#include <iostream>
using namespace std;
void swapme(char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}

int main()
{
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    cout << x << " " << y << endl;
    swapme(x,y); // call by value call by reference with pointer
    cout << x << " " << y;
    t = x;
    x = y;
    y = t;
    cout << " " << x << " " << y;
    char *a = "upendra";
    cout<<a<<endl;
    //symbol table is nothing but a mapping of a variable to its address 
    // x ---> &x;
    // y ---> &y;
    return 0;
}