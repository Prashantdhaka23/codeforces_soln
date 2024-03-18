
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
cin>>n;
// vector<int> v(n,0);
// for(int i=0;i<n;i++)cin>>v[i];
string s,k;
cin>>s;
string ans="NO";

for(int i=0;i<n;i++){
int f=0;
while( i<n && s[i]=='M' || s[i]=='m'){
     i++;
     f=1;
}
if(f==0)break;
f=0;
while(i<n && s[i]=='E' || s[i]=='e'){
     i++;
     f=1;
}
if(f==0)break;
f=0;

while(i<n && s[i]=='O' || s[i]=='o'){
     i++;
     f=1;
}
if(f==0)break;
f=0;
while(i<n && s[i]=='W' || s[i]=='w'){
     i++;
     f=1;
}
if(f==0)break;
if(i==n)ans="YES";




}
cout<<ans<<endl;





}
return 0;
}







     










