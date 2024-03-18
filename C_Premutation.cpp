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




    

 int main(){

ll t;
cin>>t;
while(t--){
ll n;
cin>>n;

vector<ll> v(n-1,0);

ll sum=0;

for(int i=0;i<n-1;i++){
  
  cin>>v[i];

  sum+=v[i];

}
int x=((n*(n+1))/2)-sum;
set<int> st;
int j=n-1;
while(j){
int f=1;
for(int k=0;k<n-1;k++){
     int g;
     cin>>g;
   if(g!=x && f!=0){
st.insert(g);
   }  else{
     f=0;
   }
}

j--;

}



vector<int> v1(n,0);
int z=st.size();
v1[z]=x;
int l=0;
for(int i=0;i<n;i++){
if(v1[i]!=x){
     v1[i]=v[l];
     l++;
}

}
for(int i=0;i<n;i++){
cout<<v1[i]<<" ";
}
cout<<endl;







}
return 0;

}





     









