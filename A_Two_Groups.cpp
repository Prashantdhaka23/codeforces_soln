#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>

 int main(){
int t;
cin>>t;
while(t--){
     vector<int> v;
     // unordered_map<int,int> mp;
ll n,x=0,y=0,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
     if(k>=0){
          x+=k;
     }else{
          y+=k;
     }
    
}

 cout<<abs(abs(x)-abs(y))<<endl;



}}