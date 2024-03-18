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
vector<ll> v(n,0);
for(int i=0;i<n;i++)cin>>v[i];

int a=0;
for(int i=0;i<n;i++){
if(v[i]<0 ){
a++;
}
}
a=a%2;
ll sum=0;
ll c=INT_MAX;

for(int i=0;i<n;i++){
sum+=abs(v[i]);
c=min(c,abs(v[i]));

}
if(a==1)sum=sum-2*(c);
cout<<sum<<endl;






}





 }







 

 
 




