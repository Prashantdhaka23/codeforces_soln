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

int main(){
ll t=1;
cin>>t;
while(t--){
ll n,a=-1,m,b;

cin>>n ;
// cin>>n;
// string s;
// cin>>s;


// map<char,int> mp;
// map<char,int> mpp;
// int ma=INT_MAX;
if(n==1){
     cout<<1<<endl;
}
else if(n%2==1){
      cout<<-1<<endl;
}else{


     cout<<n<<" ";
     ll f=0;
     ll x=n-1;
     ll y=1;
     ll z=1;
     for(int i=0;i<n-1;i++){
          if(z==1){
       if(f<x){
          cout<<x-f<<" ";
       }else {
          cout<<n-f+x-1<<" ";
       }
       f=x;
       x--;
          }
          else{
 if(f<y){
          cout<<y-f<<" ";
       }else{
          cout<<n-f+y<<" ";
       }
          f=y;
     y++;
          }

          z=1-z;




          }
          cout<<endl;

     }


}

return 0;
}















// if(x>1)ans=max(ans,x*(x-1));
// else if(x==1)ans=max(ans,1LL);


















     









