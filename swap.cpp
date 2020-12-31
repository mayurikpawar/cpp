//swapping program
#include<iostream>
using namespace std;
int main()
{
int p,m,r;
p = 43;
m = 21;
cout<<"Befor swapping p="<<p<<" and m="<<m<<"\n";
r = p + m;
p = r - p;
m = r - m;
cout<<"After swapping p="<<p<<" and m="<<m<<"\n";
}
//output:

//Befor swapping p=43 and m=21
//After swapping p=21 and m=43
