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
// cin>>t;
while(t--){
ll  n, m;
    cin >> n >> m;
vector<int> v(1e6 + 41, 0); 

int ans = 0;

for (int i = 0; i < m; i++)
{
int a1, b1;
cin >> a1 >> b1;

v[a1] += b1;
ans += v[a1];

cout<<ans<<endl;


}


     }



 }



     







 

 
 




