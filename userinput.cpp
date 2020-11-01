#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int age;
    // string college;
    string name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Your age is: " <<age<<" years olds"<<endl;
    // cout<<"Enter your college name: ";
    // cin>>college;
    // here will use to take text data
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Hello" <<name;

    // cout<<"currently you are studying in "<<college<<endl;
    return 0;
}