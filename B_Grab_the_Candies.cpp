
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
ll n ,m,c;
cin>>n;
vector<int> v(n,0);
int a=0,b=0;
for(int i=0;i<n;i++){cin>>v[i];
if(v[i]%2==0)a+=v[i];
else b+=v[i];
}
if(a>b)py
else pn







}
return 0;
}







     










