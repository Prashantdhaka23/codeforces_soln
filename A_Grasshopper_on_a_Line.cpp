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
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(int i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ppb pop_back
#define mp2 make_pair

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}
void solve(){
    return ;
}

int main(){
ll t=1;
cin>>t;
while(t--){
long long  n=0,m=0,a=0,b=0,ans=0,res=0;
// cin>>n;
cin>>n>>m;
    // vector<vector<int> > v(n,vector<int> (m,0));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>v[i][j];
//     }
// }
// string g="YES";
// cin>>n;

// vector<int> v(n,0);


// for(int i=0;i<n;i++){
// //  int k;
//      cin>>v[i];
// }

if(n%m==0){
     cout<<2<<endl;
     cout<<n-1<<" "<<1<<endl;
}else{
     cout<<1<<endl;
     cout<<n<<endl;
}




// for(int i=0;i<n;i++){
//      cout<<v[i]<<" ";
// }
// cout<<endl;


}
return 0;
}





     









int col[n];
int i=0;
int j=n-1;
while(i<j){
if(s[i]==')' && s[j]==')'){
 col[i++]=2;
col[j--]=1;
 }
else if(s[i]=='(' && s[j]=='('){
col[i++]=1;
col[j--]=2;
}
 else if(s[i]==')' && s[j]=='('){
col[j--]=2;
col[i++]=2;}
else{
col[i++]=1;
 col[j--]=1;
}


}
 cout<<"2"<<endl;
for(int i=0;i<n;i++){
cout<<col[i]<<" ";}
cout<<endl;