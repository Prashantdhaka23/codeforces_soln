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
ll n=0,x=0,y=0,a=0,b=0,c,d,e,fl=1;
ll mi=INT_MAX;
ll ma=INT_MIN;
cin>>n;
string sa,sb;
cin>>sa>>sb;
// fo(i,n){
//      ll k;
//      cin>>k;
//      v.push_back(k);
// }
fo(i,n){
if(sa[i]!=sb[i])x++;
else{
     y++;
}

a+=sa[i]-'0';
b+=sb[i]-'0';

}
if(n==1){
     if(sa[0]==sb[0] && sa[0]=='0')
     cout<<"YES"<<endl;
     else{
cout<<"NO"<<endl;
     }
}
else{
if(x!=0 && y!=0 && n>1){
     cout<<"NO"<<endl;
}else{
cout<<"YES"<<endl;

if(y==n && a==0 && b==0){
     cout<<0<<endl;

}else if(y==n && a==n && b==n){
     
cout<<2<<endl;
cout<<1<<" "<<1<<endl;
cout<<2<<" "<<n<<endl;
}else if(x==n && a==n && b==0){
cout<<1<<endl;
cout<<1<<" "<<n<<endl;

}else if( x==n && a==0 && b==n){
cout<<3<<endl;
cout<<1<<" "<<1<<endl;
cout<<2<<" "<<n<<endl;
cout<<1<<" "<<n<<endl;


}
else if(y==n && a!=0 && a!=n){
for(int j=0;j<n;j++){
if(sa[j]=='1')sa[j]='0';
else sa[j]='1';}
vector<int> ans;
if(sa[0]=='1')ans.push_back(1);
for(int i=0;i<n-1;i++){
if(sa[i]=='1'&& sa[i+1]=='0'){
ans.push_back(i+1);

}if(sa[i]=='0'&& sa[i+1]=='1'){
ans.push_back(i+2);

}


}
if(sa[n-1]=='1')ans.push_back(n);
cout<<(ans.size()/2)+1<<endl;
cout<<1<<" "<<n<<endl;

for(int i=0;i<ans.size();i+=2){
cout<<ans[i]<<" "<<ans[i+1]<<endl;


}






}
else if( x==n){


vector<int> ans;
if(sa[0]=='1')ans.push_back(1);
for(int i=0;i<n-1;i++){
if(sa[i]=='1'&& sa[i+1]=='0'){
ans.push_back(i+1);

}if(sa[i]=='0'&& sa[i+1]=='1'){
ans.push_back(i+2);

}


}
if(sa[n-1]=='1')ans.push_back(n);
cout<<ans.size()/2<<endl;
for(int i=0;i<ans.size();i+=2){
cout<<ans[i]<<" "<<ans[i+1]<<endl;


}





}

else{
cout<<"NO"<<endl;


}




}
}



}

}