//sum of 1 to n numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number for sum"<<endl;
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    
cout<<"value of sum is "<<sum<<endl;

    return 0;
}
