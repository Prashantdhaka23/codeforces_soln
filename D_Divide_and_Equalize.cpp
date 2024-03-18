




#include<bits/stdc++.h>
using namespace std;

#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set
#define lb                                  lower_bound
#define ub                                  upper_bound
#define fo(i,a,b)                           for(i=a;i<=b;i++)
#define all(v)                              (v).begin(),(v).end()
#define all1(v)                             (v).begin()+1,(v).end()
#define allr(v)                             (v).rbegin(),(v).rend()
#define allr1(v)                            (v).rbegin()+1,(v).rend()
#define sort0(v)                            sort(all(v))



ll spf[1000001];
 
vector<ll> primes;
void sieve() {
 spf[1] = 1;
 for (ll i = 2; i < 1000001; i++) {
     spf[i] = i;
 }
 
 for (ll i = 4; i < 1000001; i += 2) {
     spf[i] = 2;
 }
 
 for (ll i = 3; i * i < 1000001; i++) {
     if (spf[i] == i) {
         for (ll j = i * i; j < 1000001; j += i) {
             if (spf[j] == j)
                 spf[j] = i;
         }
 
     }
 }
 for (ll i = 2; i < 1000001; i++) {
     if (spf[i] == i) {
         primes.push_back(i);
     }
 }
}
 
vector<ll> getFactorization(ll x) {
 vector<ll> ret;
 while (x != 1) {
 
     ret.push_back(spf[x]);
     x = x / spf[x];
 }
 return ret;
}


int32_t main(){
sieve();
int tc=1;
cin>>tc;
while(tc--){
int n; cin>>n; 
vector<int> v(n);  
for(int i=0;i<n;i++){       cin>>v[i];    }

map<int,int> mpp;

for(int i=0;i<n;i++){
    vector<int> p=getFactorization(v[i]);

    for(int j=0;j<p.size();j++){

     mpp[p[j]]++;

    }
}
int ok=1;
for(auto [a,b] : mpp){
    if(b%n!=0){
        cout<<"NO"<<endl;
        ok=0;
        break;
    }
}
if(ok)
cout<<"YES"<<endl;


}
return 0;
}

