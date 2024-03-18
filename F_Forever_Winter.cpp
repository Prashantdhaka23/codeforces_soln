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
map<long long ,long long  > mp;

void dfs1(vector<bool> & v1,ll x,ll a, long long& ans){

   ll  b=mp[a];
while(a>=1){
     if(v1[a]==1){
         return ;
     }
     ans+=1LL*a*a;
     v1[a]=1;

     a-=b;
     b--;
}


}
void dfs2(vector<bool> & v1,ll x,ll  a, long long& ans){
ll b=mp[a-1];
while(b>=1){
       if(v1[a]==1){
        return ;
     }
     ans+=1LL*a*a;
     v1[a]=1;
     a-=b;
     b--;
}
if(v1[1]==0)
ans++;
v1[1]=1;



}

void dfs(vector<bool> & v1,long long  x,long long a,long long& ans){
     if(v1[a]==0){
ans+=1LL*a*a;
v1[a]=1;
     }else{
          return ;
     }
 if(mp.find(a-x)!=mp.end()){
     dfs1(v1,x-1,a-x,ans);

 }
 else if(mp.find(a-x-1)!=mp.end()){

 dfs2(v1,x-1,a-x,ans);


 }
 else {
     dfs(v1,x-1,a-x,ans);
 }

      if(mp.find(a-x+1)!=mp.end()){
             dfs1(v1,x-1,a-x+1,ans);

 }
 else if(mp.find(a-x)!=mp.end()){

dfs2(v1,x-1,a-x+1,ans);
 }
 else 
     dfs(v1,x-1,a-x+1,ans);

}



 
 int main(){
vector<long long > v(2050,0);
for(int i=1;i<=2025;i++){
     v[i]+=v[i-1]+i;
     mp[v[i]]=i;
}
ll t;
cin>>t;
while(t--){
ll a,b,n,m=INT_MAX;
cin>>a;
long long ans=0;

if(mp.find(a)!=mp.end() ){
b=mp[a];
while(a>=1){
     ans+=a*a;
     a-=b;
     b--;
}



}
else if(  mp.find(a-1)!=mp.end()){

b=mp[a-1];
while(b>=1){
     ans+=1LL*a*a;
     a-=b;
     b--;
}
ans++;


}
else{

ll x=upper_bound(v.begin(),v.end(),a)-v.begin();
vector<bool> v1(2559300,0);
 ans=0;


dfs(v1,x,a,ans);


}
cout<<ans<<endl;












}




}














     





 