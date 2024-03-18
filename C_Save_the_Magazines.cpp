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
     unordered_map<int,int> mp;
int n,x,y,a,b,c,d,e,fl=1;
cin>>n;
string s;
cin>>s;
fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
}
int ans=0;

int res=0;
int res1=0;
for(int i=0;i<n;i++){
if(s[i]=='1')res+=max(v[i],res1);
if(s[i]=='0' || v[i]<res1)res1=v[i];
}



cout<<res<<endl;



 }


 }
