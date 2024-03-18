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
ll a,b,n,m,ans=0;
cin>>n>>m;
vector<int> v(m,0);
int j=0;

for(int i=0;i<n;i++){
     int k;
     cin>>k;
     j=0;
     while(k){
          if(k%2==1)v[j]++;
          k=k/2;
          j++;
     }
}
j=0;

for(int i=0;i<m;i++){
     if(n/2<v[i]){
          ans+=pow(2,i);
     }
}
cout<<ans<<endl;


}






return 0;
}







     









