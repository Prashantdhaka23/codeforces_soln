#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<numeric> 
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}



 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=0;
int n;
cin>>n;
int arr[n];
e=n;
int brr[n+1];
brr[0]=arr[0];
for(int i=0;i<n;i++){ 
cin>>arr[i];
brr[i+1]= gcd(brr[i],arr[i]);

}
int ans=-1;

if(brr[n]!=1)fl=1;
else{
  brr[n]=arr[n-1];
  for(int i=n-1;i>=0;i--){
brr[i]=gcd(arr[i],brr[i+1]);
if(brr[i]==1){
     e=i;
     break;
}

  }
  
for(int i=n-1;i>=e;i--){
     for(int j=i;j>=e;j--){
int m=gcd(arr[i],arr[j]);

if(m==1){
     d=i+j+2;
   ans=max(ans,d); 
 
}
}
}

}
if(fl)cout<<-1<<endl;
else{
     cout<<ans<<endl;
} 

}




}



