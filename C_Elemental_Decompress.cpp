#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"N"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }


 int main(){

ll t;
cin>>t;
while(t--){
ll n,m,r;
cin>>n;

vector<pair<ll,ll> > a(n);
int f=0;
int l=0;
// vector<ll> v1(n,0);
set<int> st;
for(int i=0;i<n;i++){
int y;
cin>>y;
pair<ll,ll> p;
p=make_pair(y,i);
a[i]=p;
st.insert(i+1);

}
sort(a.begin(),a.end());
vector<int> v1(n,0);
vector<int> v2(n,0);
int x=1;
set<int> std;

for(int i=0;i<n;i++){
int u=a[i].second;
if(a[i].first<x){
     f=1;
     break;
}
if(st.find(a[i].first)!=st.end()){
     while(std.find(x)!=std.end() ){x++;
     if(x==n+1){
          f=1;
          break;
     }}
v1[u]=a[i].first;
v2[u]=x;
st.erase(a[i].first);

x++;
}
else{
v2[u]=a[i].first;
v1[u]=*st.begin();
int q=*st.begin();
st.erase(q);
if(std.find(a[i].first)!=std.end()){
     f=1;
     break;
}
std.insert(a[i].first);

}


}

if(f)cout<<"NO"<<endl;
else{
     cout<<"YES"<<endl;
     for(int i=0;i<n;i++){
          cout<<v1[i]<<" ";
     }
     cout<<endl;
     for(int i=0;i<n;i++){
          cout<<v2[i]<<" ";
     }
     cout<<endl;
}









}




 }

     






 

 
 




