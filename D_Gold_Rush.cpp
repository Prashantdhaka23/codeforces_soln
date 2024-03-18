#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }
int ans=0;

void dfs(int a,int b ){
     if(a==b){
          ans=1;
          return ;
     }
   
    if(a%3==0) {dfs(a/3,b);
    dfs(2*(a/3),b);}
   
    return;
}
 
 int main(){

ll t;
cin>>t;
while(t--){
int a,b,n,m=INT_MAX;
ans=0;
cin>>a>>b;


dfs(a,b);
if(ans==1){
     py
}else pn




}




}














     






