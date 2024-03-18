#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

    

 int main(){
ll t;
cin>>t;
while(t--){
long long  n,m,a=0,d=0;
//  long long  m=1e9+7;
// cin>>n;


vector<int> v(4,0);
for(int i=0;i<4;i++){

cin>>v[i];
d+=v[i];
}

int f,g,h;

if(v[0]==0)cout<<1<<endl;
else{
f++;
a+=v[0];
a+=2LL*min(v[1],v[2]);
int m=abs(v[1]-v[2]);

a+=min(m,v[0]);
if(v[0]>m){
int l=v[0]-m;
g++;

a+=min(v[3],l);


}

cout<<min(a+1,d)<<endl;

}



}

 }



     






