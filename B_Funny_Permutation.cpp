#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=1;
cin>>a;
if(a==3)cout<<-1<<endl;
else if(a==1)cout<<1<<endl;
else if(a==2)cout<<2<<" "<<1<<endl;

else{
int arr[a];
arr[0]=a;
arr[1]=a-1;
c=1;
for(int i=2;i<a;i++){
arr[i]=c;
c++;

}
for(int i=0;i<a;i++){
     if(i!=a-1)
cout<<arr[i]<<" ";
else cout<<arr[i];

}
cout<<endl;




}

}

}