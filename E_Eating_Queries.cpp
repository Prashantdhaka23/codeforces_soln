#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
ll a,b=0,c,d,e,fl=1;
ll x,y;
cin>>x>>y;
ll sum[x];
ll arr[x];
for(int i=0;i<x;i++)cin>>arr[i];
sort(arr,arr+x);
for(int i=0;i<x/2;i++){
     swap(arr[i],arr[x-1-i]);
}
for(int i=0;i<x;i++){
b+=arr[i];
     sum[i]=b;
}

int cady=0;
for(int i=0;i<y;i++){
int k;
cin>>k;
int count=-1;
int l=0;
int h=x-1;
int mid=l+(h-l)/2;
while(l<=h){
     int mid=l+(h-l)/2;
     if(sum[mid]>=k){
count=mid+1;
h=mid-1;
     }else if(sum[mid]<k){
          l=mid+1;
     }

}

cout<<count<<endl;


}






}



}