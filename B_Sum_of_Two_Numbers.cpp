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
#define pb push_back
#define ppb pop_back
#define mp make_pair
 
 int main(){

ll t;
cin>>t;
while(t--){
ll n,m,ans=0;
cin>>n;
string s=to_string(n);

ll a=0;
ll b=0;
int z=0;
for(int i=0;i<s.size();i++){
int x=s[i]-'0';
if(x%2==0){
     a=(a*10)+(x/2);
     b=(b*10)+(x/2);

}
else{
if(z==0){
      a=(a*10)+((x+1)/2);
     b=(b*10)+(x/2);

}
else{
     a=(a*10)+((x)/2);
     b=(b*10)+((x+1)/2);

}
z=1-z;


}


}
cout<<a<<" "<<b<<endl;






}






return 0;
}







     









