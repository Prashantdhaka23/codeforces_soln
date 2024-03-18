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
int n,x=INT_MAX,y,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
     x=min(x,k);
}

if(x==v[0]){
     cout<<"Bob"<<endl;
}else{
     cout<<"Alice"<<endl;
}



}}