#include<iostream>
using namespace std; 
// *
// **
// ***
// ****
// ***
// **
// *
int main ()
{
    int n;
     cout<<" enter the number of lines ";
     cin>>n;
     // upper triangle 
     for( int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
     // lower triangle 
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
}