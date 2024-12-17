#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
   int t;cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    int arr[n];
    int nt[22]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
      nt[arr[i]]++;
            
        }
   int sum=0;
   for (int i = 0; i < 22; i++)
   {
    sum+=nt[i]/2;
   }
   cout<<sum<<endl;
   
   }
   return 0;
}
   