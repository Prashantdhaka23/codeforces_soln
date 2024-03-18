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
int o=0;
int e=0;
int o1=0;
int e1=0;
string s;
cin>>s;
for(int i=0;i<n;i++){
     if(s[i]=='W'){
          if((o==0 || e==0 )&& o1==1){
          f=0;
          }
          o1=0;
          o=0;
          e=0;
     }
     if(s[i]=='B'){
          o1=1;
          o++;
     }
     if(s[i]=='R'){
          o1=1;
          e++;
     }
}
if((o==0 || e==0 )&& o1==1){
          f=0;
          }
          if(f)py
          else pn
          




     }

}





     







 

 
 




