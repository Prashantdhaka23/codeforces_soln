#include<bits/stdc++.h>
using namespace std;
# define ll long long 

 
 int main(){

ll s=1;
cin>>s;
while(s--){


ll n ,m;

cin>>n>>m;

string y,x;
cin>>y>>x;

reverse(x.begin(),x.end());

y=y+x;


int cnt=0;
for(int i=0;i<n+m-1;i++){
     if(y[i]==y[i+1])cnt++;

}
if(cnt>1)
cout<<"NO"<<endl;

else 
cout<<"YES"<<endl;
}
return 0;
}







     









