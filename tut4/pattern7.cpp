//triangle number pattern
#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int row=1;
 while (row<=n)
 {
    int colum=1;
    while (colum<=row)
    {
        cout<<row;
        colum++;
    }
    cout<<endl;
    row++;
 }
    
}