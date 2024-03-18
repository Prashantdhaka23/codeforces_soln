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
\
 int main(){

ll t;
cin>>t;
while(t--){
ll n,m,k;
cin>>n>>m>>k;
ll ans=INT_MAX;

vector<int> v(n,0);
vector<int> v1(m,0);
double a1=0;
double  b1=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    a1+=v[i];
}
for(int i=0;i<m;i++){
    cin>>v1[i];
    b1+=v1[i];
}

double x=n;
double x1=m;

double c1=b1;
double c2=a1;
a1=a1/x;
b1=b1/x1;
double f=k;
if(b1==f){
     cout<<-1<<endl;
}
else if(a1>b1){
    cout<<0<<endl;
}else{
    
 
 if(true){

     ll low=1;
     ll high=1e16;

  
  while(low<=high){
  ll mid=(low+high)/2;
     double d=mid;
     double c3=c1+1.0*mid;
     double h=x1+d;
     if(c3/h<a1){
         ans=min(ans,mid);
          high=mid-1;
        
     }else{
           low=mid+1;
     }
    
  }
    
       
 }if(true){
     ll low=1;
     ll high=1e16;
      while(low<=high){
          ll mid=(low+high)/2;
double z=mid;
     double c3=c2+double(k)*z;
     double xz=x+z;
     if((c3/xz)>b1){
          ans=min(ans,mid);
         high=mid-1;
     }else{
          low=mid+1;
     }
    
  }

         
 }
   cout<<ans<<endl;  
  
    
}



}


return 0;
}







     







