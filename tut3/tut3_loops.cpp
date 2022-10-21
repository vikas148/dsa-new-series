#include<iostream>
using namespace std;
int main()
{
int a;
int b;
cout<<"enter the value of a"<<endl;
cin>>a;
// a=cin.get();   
// it will give us ascai value of particular integer also applicable for space enter tab 
cout<<"Enter the value of B"<<endl;
cin>>b;
// cout<<a<<endl;

cout<<"the value of a and b is "<<a<<""<<b<<endl;
if (a>b)
{
cout<<"answer is a";
}

else{
    cout<<"answer is b";
}

return 0;
}