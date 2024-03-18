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
vector<int> v(n,0);


for(int i=0;i<n;i++)cin>>v[i];
for(int i=0;i<n;i++){
int k;
cin>>k;
string s;
cin>>s;
int p=v[i];
for(int j=0;j<k;j++){
     if(s[j]=='U'){
          p=(p-1+10)%10;
     }else{
          p=(p+1+10)%10;
     }
}

cout<<p<<" ";

}

cout<<endl;











}




 }

     







 

 
 




