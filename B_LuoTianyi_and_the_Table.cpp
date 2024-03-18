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
 
 int main(){

ll t;
cin>>t;
while(t--){
ll a,b,n,m=INT_MAX,ans=0;
cin>>a>>b;
 n=a*b;

ll f=min(a,b);
ll f1=max(a,b);
a=f;
b=f1;

vector<ll> v(n,0);
for(int i=0;i<n;i++){
  cin>>v[i];
}
sort(v.begin(),v.end());
ll a1=abs((v[0]-v[n-1]));
ll  a2=abs((v[0]-v[n-2]));
ll b1=abs((v[0]-v[n-1]));
ll b2=abs((v[1]-v[n-1]));

ll  x1=a1*(a*(b-1));
x1+=a2*(a-1);
ll x2=b1*(a*(b-1));
x2+=b2*(a-1);
cout<<max(x1,x2)<<endl;













}






return 0;
}







     







