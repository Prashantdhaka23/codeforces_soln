
#include<bits/stdc++.h>
using namespace std;
# define ll long long 

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
    

 int main(){
ll t;
cin>>t;
while(t--){
long long  n,m=0;
ll ans=0;
//  long long  m=1e9+7;
cin>>n>>m;

vector<ll> p;
map<int,int> mp;
vector<int> v(n,0);
for(int i=0;i<n;i++){
cin>>v[i];
mp[v[i]]++;
}

for(int i=0;i<m;i++){
cin>>p[i];
}
sort(p.begin(),p.end());
reverse(p.begin(),p.end());

priority_queue<int> pq;

for(auto it : mp){
pq.push(it.second);

}
int j=0;
while(pq.size()){
ll x=pq.top();
pq.pop();

ans+=min(x,p[j]);

if(x>p[j]){
     x-=p[j];
     pq.push(x);
}

j++;

}

cout<<ans<<endl;


}





     







}

