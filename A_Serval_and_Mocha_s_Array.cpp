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

ll t=1;
cin>>t;
while(t--){
ll n ,m;
string ans="NO";
cin>>n;
vector<ll> v(n,0);
for(int i=0;i<n;i++)cin>>v[i];

int x=v[0];
for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
int x=gcd(v[i],v[j]);
if(x<=2 && i!=j)ans="yes";


     }
f

}
// cout<<x<<endl;
// if(x>n)ans="NO";
cout<<ans<<endl;


}



return 0;
}







     










