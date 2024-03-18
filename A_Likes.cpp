#include<bits/stdc++.h>
using namespace std;
# define ll long long 

 int main(){

ll t1=1;
cin>>t1;
while(t1--){
ll n ;
cin>>n;

int aa=0;
int bb=0;
for(int j=0;j<n;j++){
     int k;

     cin>>k;
if(k>0)aa++;
else bb++;
}

for(int i=0;i<n;i++){
int j=1;
while(j<=aa){
     cout<<j<<" ";
     j++;
     i++;
}
j-=2;
int y=j;
while(i<n){
cout<<y<<" ";
     y--;i++;
}

}
cout<<endl;
for(int i=0;i<n;i++){
int j=0;
while(j<bb){
cout<<1<<" ";
cout<<0<<" ";
    j++; 
    i++;
    i++;
}
int y=1;
while(i<n){
      cout<<y<<" ";
     y++;
     i++;
     i--;
     i++;
}

}
cout<<endl;

}
return 0;
}







     








