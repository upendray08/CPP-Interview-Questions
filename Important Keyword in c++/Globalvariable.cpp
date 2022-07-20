// How to acess global variable
// C++ program to show that we can access a global
// variable using scope resolution operator :: when
// there is a local variable with same name
// #include<iostream>
// using namespace std;

// // Global x
// int x = 0;

// int main()
// {
// // Local x
// int x = 10;
// cout << "Value of global x is " << ::x;
// cout<< "\nValue of local x is " << x;
// return 0;
// }
// CPP program to illustrate
// scope of local variables
// and global variables together
// #include<iostream>
// using namespace std;

// // global variable
// int global = 5;

// // main function
// int main()
// {
// 	// local variable with same
// 	// name as that of global variable

// 	int global = 2;
// 	cout << ::global << endl;
// }

// CPP program to illustrate
// usage of global variables
#include <iostream>
using namespace std;
#define CPP 12

// global variable
int global = 5;

// global variable accessed from
// within a function
void display() // function parameter nhi aur local variable present nhi hai function funct can acess the global variabel
{
    cout << global << endl;
    cout << CPP << endl;
}

// main function
// int main()
// {
//     int global = 12;
// 	display();

// changing value of global
// variable from main function
// 	global = 10; //global update
//     cout<<::global<<endl;
//     cout<<global <<endl;
// 	display();
//     return 0;
// }
int main()
{
    int global = 12;
    display();

    // changing value of global
    // variable from main function
    global = 10; // global update
    cout << ::global << endl;
    cout << global << endl;
    display();
    return 0;
}
// CPP program to illustrate
// usage of local variables
#include<iostream>
using namespace std;

void func()
{
	// this variable is local to the
	// function func() and cannot be
	// accessed outside this function
	int age=18;
	cout<<age;
}

int main()
{
	cout<<"Age is: ";
	func();
	
	return 0;
}
