#include<bits/stdc++.h>
using namespace std;
# define ll long long 
ll pwr(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}

 int main(){

ll tcc=1;
cin>>tcc;
while(tcc--){
ll a,b,c,d ;
cin>>a>>b>>c>>d;
ll x=d-b;
ll y=a+x-c;
if(x>=0 && y>=0){
     cout<<x+y<<endl;
}
else{
     cout<<-1<<endl;
}



}
return 0;
}



 



     






