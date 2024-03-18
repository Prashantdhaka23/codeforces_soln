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
cin>>n>>m;
string ans="";
  int x=m-1;
if(abs(x)>n  ){
     cout<<-1<<endl;
}
else{
   
     while(x>0){
ans+='+';
x--;
     }
     while(x<0){
ans+='-';
x++;
     }
     while(ans.size()<n){
          ans+='*';
     }
     cout<<ans<<endl;
}

}

return 0;
}







     










