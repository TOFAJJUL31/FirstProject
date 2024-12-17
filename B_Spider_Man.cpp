#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
   int t;cin>>t;
   int a[t],sum=0;
   for (int  i = 0; i < t; i++)
   {
    cin>>a[i];
    sum+=a[i]-1;
    if (sum%2==0)
    {
        cout<<"2\n";
    }
    else
    cout<<"1\n";
    
    
   }
   return 0;
}
   