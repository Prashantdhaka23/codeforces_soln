#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=1;
int n;
cin>>n;
int arr[n];
fo(i,n)cin>>arr[i];

int i=0;
int j=n-1;
int ans=0;
while(i<j){
if(arr[i]==1 &&arr[j]==0){
     ans++;
     i++;
     j--;
}else if(arr[j]==1){
     j--;
}else if(arr[i]==0){
     i++;
}


}


cout<<ans<<endl;



}



}