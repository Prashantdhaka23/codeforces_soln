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

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t;
cin>>t;
ll x=1;

while(t--){



long long  n,m;
cin>>n;
ll x=sqrtl(n-1);
cout<<x<<endl;
// cin>>m;
// string s;
// cin>>s;
// ll low=0;
// ll high=1e9;
// ll ans=INT_MAX;
// while(low<=high){

// ll mid=(low)+(high-low)/2LL;

// ll x=8*(mid-1)+1;
// ll y=8*(mid-1)+4;

// if(x>=n){
// ans=min(ans,mid);
// high=mid-1;

// } 
//  if(y>=n){
// ans=min(ans,mid);
// high=mid-1;

// }
// else{

//      low=mid+1;
// }




// }

// // for(int i=0;i<n;i++){
// //      cin>>v[i];
// // }
// // int ans=0;
// // long long x=1,a=1;
// // long long b=2;
// // v1.push_back(1);

// // x=1;


   
     
// //   long long c= lower_bound(v1.begin(),v1.end(),n)-v1.begin(); 

// // long long d=lower_bound(v2.begin(),v2.end(),n)-v2.begin();

// // cout<<min(2*(c),2*(d+1)-1)<<endl;

// // cout<<ans<<endl;

}
return 0;
}





     









