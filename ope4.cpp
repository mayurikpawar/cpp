//operator program
#include<iostream>
using namespace std;
int main()
{
int a=3,b=5,c;
c=a&b;
cout<<"a&b="<<c<<"\n"; // And operation
c=a|b;
cout<<"a|b="<<c<<"\n"; // OR operation
c=a>>4;
cout<<"a>>4="<<c<<"\n"; //left shift
c=b<<3;
cout<<"b<<3="<<c<<"\n"; // right shift
}
//output:
//a&b=1
//a|b=7
//a>>4=0
//b<<3=40
