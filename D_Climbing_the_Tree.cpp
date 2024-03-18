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

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t;
cin>>t;
while(t--){
long long  n;
cin>>n;
int h2=INT_MAX;
int h1=0;
while(n--){

int x;
cin>>x;
if(x==1){
int a,b,c;
cin>>a>>b>>c;

int l1=(a-b)*c+b;
int l2=(a-b)*c+1;
if(l1>=h1 && l2<=h2){
h1=l1;
h2=l2;
cout<<1<<" ";

}


else{
   cout<<0<<" ";  
}


}
else{

int a,b;
cin>>a>>b;

int x1=(h1-a+1)/(a-b);
int x2=(h2)/(a-b);

if(x1-x2<=1  ){
cout<<x1+(x1-x2)<<" ";

}else{
     cout<<-1<<" ";
}


}






}
cout<<endl;



}
return 0;
}
