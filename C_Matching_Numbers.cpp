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
ll n,m,ans=0;
cin>>n;
if(n%2==0){
     cout<<"NO"<<endl;
}
else{

cout<<"YES"<<endl;

cout<<1<<" "<<2*n<<endl;

int x=1;
int y=2*n;
int z=n-1;
int a=1;
int b=2;
int r=0;
while(z>0){
cout<<x+a<<" "<<y-b<<endl;
cout<<x+b<<" "<<y-a<<endl;
if(r==0){
a=a+2;
b=b+3;
}
else{
a=a+1;
b=b+2;
}

r=1-r;
z-=2;

}






}
// cout<<endl;







}






return 0;
}







     









