#include<bits/stdc++.h>



using namespace std;
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;





    

 int main(){

ll t;
cin>>t;
while(t--){
ll n;
cin>>n;

vector<ll> v(n,0);

ll sum=0;
map<int,int> mp;

for(int i=0;i<n;i++){
  cin>>v[i];
mp[v[i]]++;
}

std::map<int,int>::iterator it;
int ans=0;
int x=(mp.begin()->first);
for( it=mp.begin();it!= mp.end();it++){




}











}
return 0;

}





     









