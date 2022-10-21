//+ve no -ve no or 0 no
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    // if (a>0)
    // {
    //     cout<<"the number is posive +ve"<<endl;
    // }
    // if (a<0)
    // {
    //    cout<<"th enumber is -ve"<<endl;
    // }
    // if (a==0)
    // {
    //     cout<<"the number is zero 0"<<endl;
    // }

    /*else{
        if (a<0)
        {
            cout<<"the number is -ve"<<endl;
        }
        else{
            cout<<"the number is zero 0"<<endl;
        }
    }
*/
if (a>0)
{
cout<<"the number is +ve"<<endl;
}

else if(a<0)
{
    cout<<"th enumber is -ve"<<endl;
}
    
else{
    cout<<"th enumber is 0"<<endl;
}    
    

    return 0;
}
