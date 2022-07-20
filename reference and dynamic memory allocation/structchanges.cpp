#include <bits/stdc++.h>
using namespace std;
typedef struct student
{
    string name;
    int rollno;
    string batch;
} stu;
int main()
{
    stu s1;
    // std::cout<<s1<<endl;
    s1.name = "upendra";
    s1.rollno = 123;
    s1.batch = "EXTC";
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.batch<<endl;
    return 0;
}