#include<bits/stdc++.h>
using namespace std;
# define ll long long 


    

 int main(){
ll t;
cin>>t;
while(t--){
long long  n,m,ans=0;
//  long long  m=1e9+7;
cin>>n;
vector<int> a;
vector<int> b;


vector<int> v(n,0);
for(int i=0;i<n;i++){
cin>>v[i];
if(v[i]%2!=0){
a.push_back(i+1);
}else{
     b.push_back(i+1);
}

}
if(a.size()==0)cout<<"NO"<<endl;
else if(a.size()>=3){
cout<<"YES"<<endl;
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
}
else if(a.size()<3 && b.size()<2){
     cout<<"NO"<<endl;
}else if(a.size()<3 && b.size()>=2){
    cout<<"YES"<<endl;
cout<<a[0]<<" "<<b[0]<<" "<<b[1]<<endl; 
}








     







}

}