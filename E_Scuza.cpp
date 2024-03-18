#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
long long  a,b,c,d,e,fl=1;
cin>>a>>b;
long long  arr[a],brr[b];
for(long long int i=0;i<a;i++)cin>>arr[i];
for(long long int k=0;k<b;k++)cin>>brr[k];
long long int cr[a];
long long  sum=0;
for(int i=0;i<a;i++){
sum+=arr[i];
cr[i]=sum;
}

for(long long int i=0;i<b;i++){
    long long  int h=a-1;
    long long  int l=0;
    long long  int mid=l+(h-l)/2;
 
int bt=-1;
while(l<=h){
 long long  int mid=l+(h-l)/2;
 if(arr[mid]>brr[i])h=mid-1;
 else{
     bt=mid;
     l=mid+1;
 }

};
if(bt>=0)
brr[i]=cr[bt];
else brr[i]=0;
}

for(long long int i=0;i<b;i++){
     
     cout<<brr[i]<<" ";
}
cout<<endl;







}



}