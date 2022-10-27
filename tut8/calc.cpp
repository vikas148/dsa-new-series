#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the Operation you want"<<endl;
    cin>>op;
switch (op)
{
case '+':
    cout<<(a+b)<<endl;
    break;
case '-':
    cout<<(a-b)<<endl;
break;
case '*':
     cout<<(a*b)<<endl;
break;

case '/':
    cout<<(a/b)<<endl;
break;

case '%':
    cout<<(a%b)<<endl;
break;


default:
cout<<"please enter a vlaid operation"<<endl;
    break;
}


}