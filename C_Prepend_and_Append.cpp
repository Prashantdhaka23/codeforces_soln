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
int i=0;
int j=n-1;
int ans=n;
// vector<vector<int> > v(n,vector<int>(n,0));
// vector<vector<int> > v2(n,vector<int>(n,0));
while(i<=j){
    if(s[i]=='0' && s[j]=='1' || s[i]=='1' && s[j]=='0'){
ans-=2;
    }
    else{
     break;
    }
    i++;
    j--;

}
cout<<min(n,ans)<<endl;


     }

}





     







 

 
 




