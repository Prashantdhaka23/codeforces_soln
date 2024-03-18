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
ll n,m,r;
cin>>n;
vector<int> v(n,0);
map<string,int> mp;
vector<string> st;
for(int i=0;i<n;i++){
string k;
cin>>k;
mp[k]++;
st.push_back(k);

}
string res="";
for(int i=0;i<n;i++){
int f=0;
for(int j=0;j<st[i].size();j++){
string a=st[i].substr(0,j);
string b=st[i].substr(j,st[i].size()-j);
// cout<<a<<" "<<b<<" ";
if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
     f=1;
     break;
}


}
// cout<<endl;
if(f)res+='1';
else res+='0';


}


cout<<res<<endl;








}




 }

     







 

 
 




