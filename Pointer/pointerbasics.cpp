#include <bits/stdc++.h>
using namespace std;
// int *fun()
// {
//     int x = 10;
//     return &x;
// }
int main()
{
    // int i = 4;
    // int *ptr = &i;
    // cout << i << endl;
    // *ptr = *ptr + 1;
    // cout << i << endl;
    // int *ptr2 = ptr;
    // cout << ptr << endl;
    // cout << ptr2 << endl;
    // double pointer
    // char a;
    // char *b;
    // char **c;
    // a ='g';
    // b = &a;
    // c = &b;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;
    // cout<<*b<<endl;
    // cout<<*c<<endl;
    // cout<<*(*c)<<endl;
    // int i = 5;
    // int *j = &i;
    // cout << j << endl;
    // cout << *j << endl;
    // j = j + 1;
    // cout << *j << endl;
    // cout << j << endl;

    //     pointer type i.e Void pointer
    //     3. Void Pointers:
    // A void pointer is a generic pointer; it has no associated type with it. A void pointer can hold an address of any type and can be typecasted to any type. Thus we can use the void pointer to store the address of any variable.

    // Void pointer is declared by:

    // void *ptr;

    // Note:

    // 1. void pointers cannot be dereferenced. It can, however, be done using typecasting the void pointer.

    // 2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and size.

    // Example:

    // #include <iostream>
    // using namespace std;
    // int main() {
    //     void * ptr;
    //     int i = 10;
    // assign int address to void
    //     ptr = & i;
    //     cout << "Address of variable i " << & i << endl;
    //     cout << "Address where the void pointer is pointing " << ptr <<  endl;
    //     return 0;
    // }
    // Output:
    // Address of variable i 0x7ffc848c25f4
    // Address where the void pointer is pointing 0x7ffc848c25f4
    //     4. Wild Pointers:
    //  A pointer behaves like a wild pointer when declared but not initialized. So, they point to any random memory location.

    // 5. Dangling Pointers:
    // A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted). There are three different ways where Pointer acts as a dangling pointer.

    // int *p = fun();
    // // p points to something which is not
    // // valid anymore
    // cout << *p;
    // dynamic memory allocation.
    // int *p = (int *)malloc(sizeof(int));
    // int *p = (int *)malloc(sizeof(int));
    // cout << p << endl;
    // // after calling free() p becomes a dangling pointer
    // free(p); // p becomes a dangling pointer
    // cout << p << endl;
    // // now p no more a dangling pointer.
    // p = NULL;
    // cout << p << endl;
    // int *ptr;
    // cout << *ptr << endl;
    // // any code statements
    // {
    //     int ch = 4;
    //     ptr = &ch;
    //     cout << *ptr << endl;
    // }
    // cout << *ptr << endl;
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // // *ptr = p;
    // // cout << *ptr << " " << f << " " << p;
    // int *ptr = 0;
    // int a = 10;
    // // *ptr = a;
    // ptr = &a;
    // // *ptr = 12;
    // // cout<<*ptr<<" "<<a<<endl;
    // int arr[4] = {4, 5, 6, 7};

    // int *p = (arr + 1);
    // cout << *p+ 9;
    // char b[] = {'x', 'y', 'z'};
    // char *c = &b[0];
    // cout << c << endl;
    // char a[] = "abc";
    // char *p = &a[0];
    // cout<<p<<endl;
    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];
    // char st[] = "ABCD";
    // for (int i = 0; st[i] != '\0'; i++)
    // {
    //     cout<<*(st )+ i<<endl;
    //     // cout << st[i] << *(st) + i << *(i + st) << i[st];
    // }
    // Here ptr is dangling pointer
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = arr;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    float *ptr2 = ptr1 + 3;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout << *ptr2 << " ";
    cout << sizeof(ptr2) - sizeof(ptr1);
    return 0;
}