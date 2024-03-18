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

for(int i=0;i<n;i++){
     int k;
     cin>>k;
   if(i%2==0){
     if(k%2==0)e++;
     else o++;
   } 
   else {
     if(k%2==0)e1++;
     else o1++;
   } 
}
if(o+e1==n ||o+o1==n || e+e1==n || e+o1==n   )py
else pn




     }

}





     







 

 
 




