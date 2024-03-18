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
     unordered_map<int,char> mp;
int n,x,y,a,b,c,d,e,fl=0;
cin>>n;
fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
mp[k]='0';
}
string s;
cin>>s;
for(int i=0;i<n;i++){
     if(mp[v[i]]=='0'){
          mp[v[i]]=s[i];
     }else{
          if(mp[v[i]]!=s[i]){
               fl=1;
               break;
          }
     }
}

if(fl)cout<<"NO"<<endl;
else{
     cout<<"YES"<<endl;
}



}



}