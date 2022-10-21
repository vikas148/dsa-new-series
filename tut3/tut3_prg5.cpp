//sum of 1 to N even numbers
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
   int i=2;
int sum=0;
while (i<=num)
{
    sum=sum+i;
    i=i+2;
}
cout<<"the sum of all even no in between 1 to "<< num<<""<<"is " <<sum<<endl;


    return 0;
}
