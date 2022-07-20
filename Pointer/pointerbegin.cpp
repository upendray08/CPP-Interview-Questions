#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int *ptr = arr; // arr,&arr[0] same
    cout << arr << " " << &arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    // arr = arr+1; //it is not possible or it can't be modified easily
    cout << sizeof(&arr) << " " << sizeof(&ptr) << endl;
    // int a = 10;
    // char b= 'a';
    // double c = 10.2;
    // float d= 2.2;
    // string str = "abs";
    // char st1[] = "abfsdf";
    // cout << arr[0] << *arr << *(arr + 0) << *(0 + arr) << 0 [arr];
    int a = 4;
    // &a = &a + 1;
    int *ptr1 = &a;
    cout<<ptr1<<endl; // pointer pointing to this memory location then we can change 
    ptr1 = ptr1 + 1;
    cout<<ptr1<<endl;
    // symbol table
    // a ---> &a;
    // b --->&b
    // symbol table is nothing but a mapping of  symbols with its address of that symbol
    // it's mapped or address can't be modified by programmer
    // arr[i] = *(arr+i);
    // i[arr] = *(i+arr);

    //ATTENTION:
    //Cout impementation on arr is totally different in char array 
    // char ch = 'a';
    // char* temp = &ch;
    // cout<<temp<<endl; //print karega character tabh tak jab tak usse terminator na milta hai '\0'

    char temp[] = "abcdef";
    char *t = temp; //RISK process 
    cout<<temp<<endl;
    cout<<t<<endl;
    //temp memory --> "abcdef"
    //then temp[]--> copy from temp memory to temp[]
    //temp memory --> "abcdef" stored hoga then 
    //temp* --> address of temp first char 
    return 0;
}