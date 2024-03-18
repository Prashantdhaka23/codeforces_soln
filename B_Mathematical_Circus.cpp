


#include<bits/stdc++.h>
 
 
using namespace std;
 
int main(){
int t=1;
 
cin>>t;
while(t--){
     long long x,y;
     cin>>x>>y;

   if(y%4==0){
     cout<<"NO"<<endl;
   }else{
if(y%2!=0 ){
     cout<<"YES"<<endl;
 
long long a=1,b=2;
for(int i=0;i<x/2;i++){
cout<<a<<" "<<b<<endl;
a+=2;
b+=2;
}
}
else if(y%4==2) {
     cout<<"YES"<<endl;

 long long a=y%4,b=a-1;
 for(int i=0;i<x/2;i++){
     if(a>x)break;
cout<<a<<" "<<b<<endl;
a+=4;
b+=4;
 
 }
 a=(y%4)+1,b=a+1;
 for(int i=0;i<x/2;i++){
     if(b>x)break;
 
cout<<a<<" "<<b<<endl;
a+=4;
b+=4;
 
 }
 
  
}

 
 
 
 
   }
 
 
 
}
 
 
}
