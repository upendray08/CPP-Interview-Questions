#include <iostream>
using namespace std;
int main()
{
    // stack memory allocation static allocation 
    // heap memory allocation dynamic allocation kahte hai 
    char ch ='a'; // 1bits stack memory allocate 
    char* ptr = new char;
    ptr = &ch; // heap  memory allocate hota dynamically 1bits and stack me memory allocate 8byte ka
    //overall memory allocation 9bytes ka hoga 
    cout<<*ptr<<endl;
    cout<<&ch<<" "<<ptr<<endl; //cout implementation is diff in char 
    int*ptr1 = new int[5]; //heap 20byte and stack 8byte overall 28 byte 
    for(int i=0;i<5;++i){
        cout<<*ptr1<<" ";
        ptr1+=1;
    }
    return 0;
}