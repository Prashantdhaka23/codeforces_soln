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
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(int i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}
bool ok(ll mid,vector<ll> & pre,vector<int> & car,ll k){

for(ll i=1;i<pre.size();i++){
     if(car[i]==0){
          ll d=pre.size();
int r=min(d-1,i+mid);
int l=max(0LL,i-mid);
ll x=pre[r]-pre[l-1];
if(x>k){
     return true;
}
     }
}
return false;


}

int main(){
ll t=1;
cin>>t;
while(t--){
long long  n,m=0,k,b;
cin>>n >> m>>k;
// string s;
// cin>>s;
// vector<int> v(n,0);
// map<char,int> mp;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
vector<ll> pre,pre1;
pre.push_back(0);
pre1.push_back(0);


    
    
    for(int j=0;j<m;j++){
        ll sum=0;
      for(int i=0;i<n;i++){
          sum+=arr[i][j];
    }
    pre.push_back(sum);
}
    
    


    
    for(int j=0;j<n;j++){
        ll sum=0;
      for(int i=0;i<m;i++){
          sum+=arr[j][i];
    }
    pre1.push_back(sum);
  
    
}
vector<int> car(pre.size(),-1);
for(int i=1;i<pre.size();i++){
    pre[i]=pre[i]+pre[i-1];
    if(pre[i]!=pre[i-1]){
     car[i]=0;
    }
}
ll ans=INT_MAX;
ll low=0;
ll high=1e16;
while(low<=high){
ll mid=(low+high)/2;
if(ok(mid,pre,car,k)){
ans=mid;
high=mid-1;

}else{
     low=mid+1;
}

}

vector<int> car1(pre.size(),-1);
for(int i=1;i<pre.size();i++){
    pre1[i]=pre1[i]+pre1[i-1];
    if(pre1[i]!=pre1[i-1]){
     car1[i]=0;
    }
}
// int ans=INT_MAX;
low=0;
high=1e16;
while(low<=high){
ll mid=(low+high)/2;
if(ok(mid,pre1,car1,k)){
ans=min(ans,mid);
high=mid-1;

}else{
     low=mid+1;
}

}



if(ans!=INT_MAX)
cout<<ans<<endl;
else cout<<-1<<endl;

















}
return 0;
}





     









