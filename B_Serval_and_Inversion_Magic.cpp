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
string s,p;
cin>>s;
p=s;
reverse(p.begin(),p.end());
int c=0;
for(int i=0;i<n;i++){
 if(s[i]==p[i])continue;    
while(i<n){
if(s[i]==p[i]){
c++;

break;

}

s[n-i-1]=s[i];
i++;
}
}


if(c>1)pn
else py





}



return 0;
}







     










