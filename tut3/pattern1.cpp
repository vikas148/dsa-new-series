//pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    //using <= because we have initialize i =1; if we write 0 then only<
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}
