#include<iostream>
using namespace std;

int main()
{
 int a=4;
 int b=6;

cout<<"a&b " <<(a&b)<<endl; 
cout<<"a|b " <<(a|b)<<endl; 
cout<<"a^b " <<(a^b)<<endl; 
cout<<"~a " << ~a<<endl;
cout<<"~b " << ~b<<endl;


// left shift or right shift operator

cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl;
cout<<(19<<1)<<endl;
cout<<(21<<2)<<endl;
cout<<endl;

// pre increment post increment

int i=7;

cout<<(++i)<<endl; //8
cout<<(i++)<<endl;//8 but increment by 1
cout<<(i--)<<endl;//so here will be 9 but dec by 1
cout<<(--i)<<endl;//so i=8 and 8-1=7



}