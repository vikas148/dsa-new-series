#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
  bool isprimeno=1;
for (int  i = 2; i < n; i++)
{
    //rem ==0 not a prime no
  if (n%i==0)
  {
    // cout<<"Not aa prime no"<<endl;
    isprimeno=0;
    break;
  }
   
}

   
if (isprimeno==0)
  {
    cout<<"not a prime no for"<<endl;

  }
  else{
    cout<<"is a prime no  for"<<endl;

  }


    // for (int i = 2; i < n-1; i++)
    // {
    //    if (n%i !=0)
    //    {
    //     cout<<"the number is prime for"<<" "<<i<<endl;
    //    }

    //    //if rem==0 not a prime number
    //    else{
    //     cout<<"the number is not prime for"<<" "<<i<<endl;
        
    //    }
    // }
    

}