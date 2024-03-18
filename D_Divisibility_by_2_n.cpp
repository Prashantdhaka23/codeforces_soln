#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>

 int main(){
int t;
cin>>t;
while(t--){
     vector<ll> v;
     // unordered_map<int,int> mp;
ll n,x,y,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}
ll sum=0;
ll index=-1;
ll m=LONG_MIN;
for(int i=0;i<n;i++){
d=0;
while(v[i]%2==0 && i<n){
     d++;
     if((i+1)%2==0)fl=0;
     v[i]=v[i]/2;

}

sum+=d;
if(i!=0){
 if(d>m){
     m=d;
   index=i;
 }}

}
c=0;
while(index%2==0){
     index=index/2;
     c++;
}
c=pow(2,c);
if(n==0)cout<<0<<endl;
else if(fl && sum==0  )cout<<-1<<endl;
else{
ll ans=0;
d=c;
while(sum<n && d!=1){
sum=sum-m;
m=m*d;
sum+=m;

ans++;
}

cout<<ans<<endl;

}





}



}