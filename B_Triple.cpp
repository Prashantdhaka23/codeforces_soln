#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"NO"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }


 int main(){

ll t=1;
cin>>t;
while(t--){
ll n,m,r;
cin>>n;
// vector<vector<int> > v(n,vector<int>(n,0));
// vector<vector<int> > v2(n,vector<int>(n,0));
map<int,int> mp;
int f=1;
for(int i=0;i<n;i++){
     int k;
     cin>>k;
     mp[k]++;
     if(mp[k]>=3 && f){
          cout<<k<<endl;
          f=0;
     }
}
if(f)cout<<-1<<endl;



     }

}





     







 

 
 




