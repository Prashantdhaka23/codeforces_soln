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
int n,m=0,r;
cin>>n;
string s;
cin>>s;
int x=0,y=0;
// vector<vector<int> > v(n,vector<int>(n,0));
// vector<vector<int> > v2(n,vector<int>(n,0));
for(int i=0;i<n;i++){
     if(s[i]=='U')y++;
     if(s[i]=='D')y--;
     if(s[i]=='R')x++;
     if(s[i]=='L')x--;
     if(x==1 && y==1)m=1;


}
if(m)py
else pn


     }

}





     







 

 
 




