#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int ans=0;
     int i=0;
    while (n != 0)
    {
       
    
      //  int digit =n%10;// it will extract digits but we want the bit so we will not use it
       int bit=n&1;
       ans=(bit * pow(10,i))+ans;
       n=n >> 1;
       i++;
    }
    cout<<"the answer is"<<ans<<endl;

    return 0;
}
