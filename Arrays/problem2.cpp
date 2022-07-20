// CPP Program to demonstrate passing
// an array to a function is always treated
// as a pointer
#include <bits/stdc++.h>
using namespace std;

// Note that arr[] for fun is
// just a pointer even if square
// brackets are used
// void fun(int arr[],int size) // SAME AS void fun(int *arr)
// {
// 	// unsigned int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "\nArray size inside fun() is " << size;
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
// 	// unsigned int n = sizeof(arr) / sizeof(arr[0]);
//     unsigned int size = sizeof(arr)/sizeof(arr[0]);
// 	cout << "Array size inside main() is " << size;
// 	fun(arr,size);
// 	return 0;
// }
// Program 2
// #include <iostream>
// using namespace std;
// void fun(int *ptr, int size) // int *ptr = &arr[0];
// {
//     int i;
//     // unsigned int n = sizeof(ptr) / sizeof(ptr[0]); // 8/4 = 2
//     // cout << n << endl;
//     // cout << sizeof(ptr) << endl;
//     for (i = 0; i < size; i++)
//     {

//         // cout << " " << ptr[i];
//         cout<<*ptr<<" ";
//         ptr++;

//     }
//     // ptr++;
// }

// // Driver program
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     fun(arr, size); // fun(&arr[0]);
//     return 0;
// }

// Program 3
// #include <iostream>
// #include <string.h>
// using namespace std;
// void fun(char *arr)
// {
//     int i;
//     // unsigned int n = strlen(arr); //strlen(arr) help us to get size of arr
//     cout << sizeof(arr) << endl;
//     // char* ptr = 4 bytes
//     unsigned int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "n = " << n << endl;
//     for (i = 0; i < n; i++)
//     {
//         // cout << arr[i] << " "; // 
//         cout << *arr << " ";
//         arr++;
//     }
// }

// // Driver program
// int main()
// {
//     char arr[] = "geeksquiz"; // char arr[] = "upendra" or string arr = "upendra"
//     char ch[] = "ab";         // "abcd\n"
//     cout << sizeof(ch) << endl;
//     char *ptr = ch;
//     cout << sizeof(ptr) << sizeof(ch) << endl;
//     fun(arr); // fun(&arr[0]);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void fun(int* arr,int size){
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100]={0};
    fill_n(arr,100,8);
    int size = sizeof(arr)/sizeof(arr[0]);
    fun(arr,size); // fun(&arr[0],100);
}