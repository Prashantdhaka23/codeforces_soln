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
long long  n,m=0,a,b;
cin>>n;
// string s;
// cin>>s;
m=n;
vector<int> v(n,0);
vector<int> c(n,0);

vector<int> v1(n+1,0);

// map<char,int> mp;
ll x=0;
// s+=s;
for(int i=0;i<n;i++){
     cin>>v[i];

    if(v[i]<=n) v1[v[i]]=1;
}
for(int i=0;i<=n;i++){
   
    if(v1[i]==0){
     m=i;
     break;
    }
}

int l=-1,r=-1;
for(int i=0;i<n;i++){
     if(l==-1 && v[i]==m+1){
          l=i;
     }
     if(v[i]==m+1){
          r=i;
     }
}
string res="NO";
if(l!=-1){
     for(int i=l;i<=r;i++){
        v[i]=m;
     }
vector<int> c1(n+1,0);

      for(int i=0;i<n;i++){
       if(v[i]<=n) c1[v[i]]=1;
     }
     int d=n;
       for(int i=0;i<=n;i++){
       if(c1[i]==0){
          d=i;
          break;
       }
     }
     if(d==m+1){
          res="YES";
     }


}
else{

if(m!=n){
     res="YES";
}



}




// ll ans=0;
cout<<res<<endl;


// if(x>1)ans=max(ans,x*(x-1));












}
return 0;
}





     









