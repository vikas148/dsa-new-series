#include<iostream>
using namespace std;

int main()
{
int num =1;
char ch='1';
//char ch='a';
switch (ch)
{
case 1:
    cout<<"First"<<endl;
    break;

case '1':
    switch (num)
    {
    case 1:
        cout<<" Value of num is"<<num<<endl;
        break;
    
    default:
        break;
    }
   // cout<<"Second"<<endl;
    break;

default:
cout<<"it is default case"<<endl;
    break;
}

}