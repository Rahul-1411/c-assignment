#include<iostream>
using namespace std;
// 1111
// 222
// 33
// 4
 int main ()
 {
    int n;
     cout<<" enter the number of lines";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<i;
        }
        cout<<endl;
     }
 }