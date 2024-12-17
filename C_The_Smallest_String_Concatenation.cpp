#include<bits/stdc++.h>
using namespace std;
bool Siuu(string x,string y){
return x+y<y+x;}
int main(){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);cout.tie(NULL);
          int n;
          cin>>n;
         vector<string>gandu(n);
         for (int i = 0; i < gandu.size(); i++)
         {
            cin>>gandu[i];
         }
         
         sort(gandu.begin(),gandu.end(),Siuu);
         for (int i = 0; i < gandu.size(); i++)
         {
            cout<<gandu[i];
         }
         cout<<"\n";
         

    return 0;
}