#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}


 int main(){
int t;
cin>>t;
while(t--){
int n,c=0,d=INT_MIN,e=INT_MAX,fl=1;


cin>>n;
vector<int> v(n,0);
for(int i=0;i<n;i++)cin>>v[i];
string s;
cin>>s;
vector<pair<char,int> > vp;
for(int i=0;i<n;i++){

vp.push_back(make_pair(s[i],v[i]));

}
int flag=0;
sort(vp.begin(),vp.end());
for(int i=0;i<n;i++){
if(vp[i].first=='B'){
if(vp[i].second< i+1){
     flag=1;
}}
else{
if(vp[i].second> i+1){
     flag=1;
}


}



}

if(flag)cout<<"NO"<<endl;
else cout<<"YES"<<endl;













}
 }