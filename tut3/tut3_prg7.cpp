//print prime number or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
int i=2;
// int num=0;
while (i<n)
{
if (n%i==0)
{
cout<<"not prime number"<<i<<endl;

}
else{
    cout<<"prime number"<<i<<endl;
}
i++;
}
// if (num !=0)
// {
//     cout<<num<<""<<"is prime number"<<endl;
// }
// else{
//     cout<<num<<" "<<"the number is not prime"<<endl;
// }

    return 0;
}
