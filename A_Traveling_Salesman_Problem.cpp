#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>
ll gcd(ll a, ll b)
{
    ll result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
 int main(){
ll t=1;
cin>>t;
while(t--){
     // vector<int> v;
     // map<int,int> mp;
ll n=0,x=0,y=0,a=0,b=0,c=0,d=0,e,fl=1;
ll mi=INT_MAX;
ll ma=INT_MIN;
cin>>n;
long long ans=0;
fo(i,n){
    
     cin>>x>>y;
if(x==0 && y<0){
     a=max(a,abs(y));
}if(x==0 && y>0){
     b=max(b,abs(y));
}if(x>0 && y==0){
     c=max(c,abs(x));
}if(x<0 && y==0){
     d=max(d,abs(x));
}

    
}
ans=2*(a+b+c+d);
cout<<ans<<endl;


}

}