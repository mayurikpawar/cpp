#include<iostream>
using namespace std;
class box{
public:
int height;
int width;
int area;
box()          //default constructor
{
height =12;
width =3;

}
friend void area(box); //friend  function
};
void area(box a)
{
a.area=a.height*a.width;
cout<<"Area of box="a.area;
}
int main()
{
box box1;   //declaring variable of class
area(box1); 
}
