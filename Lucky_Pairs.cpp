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

while(t--){
ll n,m,ans=0,r;
cin>>n>>m>>r;
vector<int> v(3,0);
v[0]=n;
v[1]=m;
v[2]=r;
int f=1;
for(int i=0;i<2;i++){
for(int j=i+1;j<3;j++){
     int a=v[i];
     int b=v[j];
     int c=a+b;
if( c%2==0 &&  c>0 ){
     py
     f=0;
     break;
}
}


}
if(f)pn
















}
return 0;

}





     









