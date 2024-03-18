#include<bits/stdc++.h>
using namespace std;
# define ll long long 
// # define py cout<<"YES"<<endl;
// # define pn cout<<"N"<<endl;
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// // map<int,int> mp;
// // std::map<int,int>::iterator it;
// // for( it=mp.begin();it!= mp.end();it++){

// // }

ll k=0;
ll res=0;
int dp[1000][1000];
string a,b;



ll ok(set<char> & st){


ll ans=0;
ll cnt=0;
for(int i=0;i<a.size();i++){

if(a[i]==b[i] || st.find(a[i])!=st.end()){
cnt++;

}
else{
ans+=((cnt)*(cnt+1))/2;

cnt=0;



}


}


ans+=((cnt)*(cnt+1))/2LL;


return ans;

}
void ok2(string & str,int i,string temp){

if(i==str.size()){
     if(temp.size()==k){
          set<char> std;
          for(int i=0;i<temp.size();i++){
std.insert(temp[i]);

          }

         res=max(res, ok(std));


     }
     return;
}
ok2(str,i+1,temp);
temp+=str[i];
ok2(str,i+1,temp);



}


 int main(){
     

ll t;
cin>>t;
while(t--){
ll n,m,r;

cin>>n>>k;
res=0;


cin>>a>>b;
set<char> st;
for(int i=0;i<n;i++){
st.insert(a[i]);
}
string str="";
 std::set<char>::iterator it;
for( it=st.begin();it!= st.end();it++){

str+=(*it);


}

ll l=str.size();

k=min(k,l);

ok2(str,0,"");

cout<<res<<endl;


}




 }

     









