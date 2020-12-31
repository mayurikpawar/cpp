//continue program
#include<iostream>
using namespace std;
int main()
{
for(int i = 1;i<=10; ++i)      //for loop
{
if(i==6||i==9)          //skip i value
{          
continue;                 //keyword
}
cout<<i<<"\t";
}
return 0;

}
//ouput:
//1	2	3	4	5	7	8	10	
